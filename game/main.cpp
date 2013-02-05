#include <QApplication>
#include "qmlapplicationviewer.h"
#ifdef Q_OS_BLACKBERRY
#include <QDeclarativeContext>
#include "scoreloop/scoreloop.h"
#endif

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QmlApplicationViewer viewer;
    viewer.addImportPath(QLatin1String("imports"));
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationLockPortrait);
#ifdef Q_OS_BLACKBERRY
    Scoreloop scoreloop;
    viewer.rootContext()->setContextProperty("scoreloop", &scoreloop);
#endif
    viewer.setSource(QUrl("qrc:/qml/game/main.qml"));
    viewer.showExpanded();

    return app->exec();
}
