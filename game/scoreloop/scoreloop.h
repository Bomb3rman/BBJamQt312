#ifndef SCORELOOP_H
#define SCORELOOP_H

#include <QObject>
#include <scoreloop/sc_client.h>
#include "scoreloopeventhandler.h"
#include <scoreloop/scoreloopcore.h>
#include <scoreloop/sc_score_list.h>
#include <scoreloop/sc_score.h>
#include <QDebug>
#include <QStringList>
#include <QModelIndex>

class Scoreloop : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName NOTIFY userNameChanged);
    Q_PROPERTY(bool scoreAvailable READ scoreAvailable NOTIFY scoreAvailableChanged);
public:
    explicit Scoreloop(QObject *parent = 0);

    enum Roles {
        Score = Qt::UserRole + 1,
        User, Rank
    };
    
signals:
    void userNameChanged();
    void scoreAvailableChanged();
    
public slots:
    void submitNewScore(double score);
    void requestScores();
    QString userName() const;
    bool scoreAvailable() const;

public:
    static void LoadLeaderboardCompletionCallback(void *userData, SC_Error_t completionStatus);
    static void ScoreCompletionCallback(void *userData, SC_Error_t completionStatus);
    static void userControllerCallback(void* cookie, SC_Error_t status);
    void requestCompleted();


    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

    SC_User_h mUser;

private:
    bool mRequestCompleted;
    SC_Client_h mClient;
    SC_InitData_t mInitData;
    static SC_ScoresController_h mScoresController;
    SC_UserController_h m_userController;
    QStringList allScores;
    ScoreloopEventHandler *eventHandler;
    bool mScoreAvailable;

protected:
    QHash<int, QByteArray> roleNames() const;
    static QVariantList leaderboardData;
};

#endif // SCORELOOP_H
