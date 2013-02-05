#include "scoreloop.h"

//extern QString asQString(SC_String_h scString);

QVariantList Scoreloop::leaderboardData;

Scoreloop::Scoreloop(QObject *parent) :
    QAbstractListModel(parent) ,
    mUser(0),
    mRequestCompleted(false),
    m_userController(0),
    mScoreAvailable(false)
{
    SC_InitData_Init(&mInitData);
    SC_Error_t rc = SC_Client_New(&mClient, &mInitData, "f9c81b81-ab2d-4c83-b3ef-7260e240bbd8",
                                  "myvg16kDCc1HR/3Y2o/mMEpgb483DB9yZG0dLUFQXQc1H+7JuNZ7SQ==",
                                  "1.0", "ISQ", "en");

    qDebug() << "Initializing SC event handler";
    if (rc == SC_OK) {
        // Plug Scoreloop into the BPS Event Loop
        eventHandler = new ScoreloopEventHandler(mInitData);
    } else {
        qDebug() << "Could not initialize Scoreloop: " << SC_MapErrorToStr(rc);
    }
    qDebug() << "Create SC scores controller";
    rc = SC_Client_CreateScoresController(mClient, &mScoresController, LoadLeaderboardCompletionCallback, this);
    if (rc != SC_OK) {;
        qWarning() << "Could not load score";
        return;
    }

    qDebug() << "Request scores";
    requestScores();

    qDebug() << "Creating user controller";
    rc = SC_Client_CreateUserController(mClient, &m_userController, userControllerCallback, this);
    if (rc != SC_OK) {;
        qWarning() << "Could not create user controller";
    }

    qDebug() << "SC load user";
    SC_UserController_LoadUser(m_userController);

    setRoleNames(roleNames());
}

SC_ScoresController_h Scoreloop::mScoresController;

void Scoreloop::LoadLeaderboardCompletionCallback(void *userData, SC_Error_t completionStatus) {

    Q_UNUSED(completionStatus)
    qDebug() << "LoadLeaderboardCompletionCallback";
     if (completionStatus != SC_OK) {
         qDebug() << "Error in LoadLeaderboardCompletionCallback" << SC_MapErrorToStr(completionStatus);
         return;
     }
    Scoreloop *currentObject = (Scoreloop*)(userData);
    if (!currentObject)
        return;
    SC_ScoreFormatter_h scoreFormatter = SC_Client_GetScoreFormatter(currentObject->mClient);
    SC_ScoreList_h scoreList = SC_ScoresController_GetScores(currentObject->mScoresController);
    unsigned int i, numScores = SC_ScoreList_GetCount(scoreList);
    currentObject->beginResetModel();
    leaderboardData.clear();
    currentObject->endResetModel();
    qDebug() << "Scores count" << numScores;
    for (i = 0; i < numScores; ++i) {
        SC_Score_h score = SC_ScoreList_GetAt(scoreList, i);
        SC_User_h user = SC_Score_GetUser(score);
        SC_String_h login = user ? SC_User_GetLogin(user) : NULL;
        SC_String_h formattedScore;
        qDebug() << "Mode:" << SC_Score_GetMode(score);

        /* Format the score - we take ownership of string */
        int rc = SC_ScoreFormatter_FormatScore(scoreFormatter, score, SC_SCORE_FORMAT_DEFAULT, &formattedScore);
        if (rc != SC_OK) {
            qWarning() << "cannot format scores";
            return;
        }
        qDebug() << " Rank: " << SC_Score_GetRank(score) << ", Result: " << SC_String_GetData(formattedScore) << ", User: " << (login ? SC_String_GetData(login) : "<unknown>");

        QVariantMap scoreData;
        scoreData["rank"] = SC_Score_GetRank(score);
        scoreData["score"] = SC_String_GetData(formattedScore);
        scoreData["username"] = login ? SC_String_GetData(login) : "<unknown>";

        currentObject->beginResetModel();
        leaderboardData.append(scoreData);
        currentObject->endResetModel();

        /* Release the string */
        SC_String_Release(formattedScore);
    }
    qDebug() << "Score changed";
    currentObject->mScoreAvailable = true;
    emit currentObject->scoreAvailableChanged();
}

void Scoreloop::ScoreCompletionCallback(void *userData, SC_Error_t completionStatus)
{
    Q_UNUSED(userData)
    Q_UNUSED(completionStatus)
    qDebug() << "Score submit completed";
}

void Scoreloop::userControllerCallback(void* userData, SC_Error_t status)
{
    qDebug() << "userControllerCallback";
    if (status == SC_OK) {
        Scoreloop *currentObject = (Scoreloop*)userData;
        if (!currentObject)
            return;
        currentObject->mUser = SC_UserController_GetUser(currentObject->m_userController);
        emit currentObject->userNameChanged();
    } else {
        qDebug() << "Error in user callback" << SC_MapErrorToStr(status);
    }
}

void Scoreloop::requestCompleted()
{
    mRequestCompleted = true;
    qDebug() << "Request completed";
}

void Scoreloop::submitNewScore(double newscore)
{
    SC_Score_h score;
    SC_Client_CreateScore(mClient, &score);
    SC_Score_SetResult(score, -newscore);
    SC_Score_SetMode(score, 1);
    SC_ScoreController_h score_controller;
    qDebug() << "Submitting new score";
    SC_Error_t rc = SC_Client_CreateScoreController (mClient, &score_controller, ScoreCompletionCallback, this);
    if (rc != SC_OK) {
        qWarning() << "cannot create score controller" << SC_MapErrorToStr(rc);;
        return;
    }
    rc  = SC_ScoreController_SubmitScore(score_controller, score);
    if (rc != SC_OK) {
        qWarning() << "cannot submit scores" << SC_MapErrorToStr(rc);;
        return;
    }
}

int Scoreloop::rowCount(const QModelIndex & parent)const
{
    Q_UNUSED(parent)
    return leaderboardData.count();
}

QVariant Scoreloop::data(const QModelIndex & index, int role)const
{
    int row = index.row();
    switch (role) {
    case User:
        return leaderboardData.at(row).toMap().value("username");
    case Rank:
        return leaderboardData.at(row).toMap().value("rank");
    case Score:
        return  leaderboardData.at(row).toMap().value("score");
    default:
        break;
    }
    return QVariant();
}

void Scoreloop::requestScores()
{
    mScoreAvailable = false;
    emit scoreAvailableChanged();
    setProperty("scoreAvailable", false);
    SC_Range_t range;
    range.offset = 0;
    range.length = 10;
    SC_ScoresController_LoadScores(mScoresController, range);
}

QString Scoreloop::userName() const
{
    if (mUser) {
        return QString(SC_String_GetData(SC_User_GetLogin(mUser)));
    }

    return QString();
}

bool Scoreloop::scoreAvailable() const
{
    return mScoreAvailable;
}

QHash<int, QByteArray> Scoreloop::roleNames() const
{
    QHash<int, QByteArray> roleNames;
    roleNames[User] = "user";
    roleNames[Rank] = "rank";
    roleNames[Score] = "score";
    return roleNames;
}
