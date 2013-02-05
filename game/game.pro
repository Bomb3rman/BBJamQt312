SOURCES += main.cpp

include(qmlapplicationviewer/qmlapplicationviewer.pri)

blackberry {
    LIBS += -lscoreloopcore -lbb
    SOURCES += scoreloop/scoreloop.cpp \
            scoreloop/scoreloopeventhandler.cpp

    HEADERS += scoreloop/scoreloop.h \
            scoreloop/scoreloopeventhandler.h
}

INSTALLS = \

OTHER_FILES += qml/game/*

RESOURCES += \
    common.qrc

OTHER_FILES += \
    qml/game/MiniBox.qml

OTHER_FILES += \
    qml/game/Wall.qml

OTHER_FILES += \
    qml/game/Ball.qml

!blackberry {
RESOURCES += \
    generic.qrc
} else {

RESOURCES += \
    bb10.qrc
}

OTHER_FILES += \
    qml/game/Highscore.qml

OTHER_FILES += \
    qml/game/HighscoreBB10.qml


