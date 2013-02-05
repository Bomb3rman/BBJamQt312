import QtQuick 1.1
import Box2D 1.0

Rectangle {
    id: screen
    width: 600
    height: 800

    color: "black"

    Sensors{}

    function startGame() {
        var component = Qt.createComponent("MiniBox.qml");
        var i;
        world.boxCount = 30;
        for (i=0; i<world.boxCount; i++) {
            component.createObject(world, {"x": Math.random() * (screen.width-100) + 50,
                                       "y": Math.random() * (screen.height-100) + 50,
                                       "rotation" : Math.random() * 90,
                                       "width" : Math.random() * 20 + 25 ,
                                       "color" : Qt.rgba(Math.random(), Math.random(), Math.random(), 1) });
        }
        screen.state = "playing"
        timeDisplay.time = 0
        gamtimer.restart();
    }

    World {
        id: world
        anchors.fill: parent


        property int boxCount: 50

        Component.onCompleted: {
            screen.startGame();
        }

        onBoxCountChanged: {
            if (boxCount === 0)
                screen.state = "gameover"
        }

        Ball {
            id: ball
            x: 200
            y: 200
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                ball.applyLinearImpulse(
                            Qt.point(1000 * (mouseX - ball.x),
                                     1000 * (mouseY - ball.y)),
                            Qt.point(ball.x, ball.y))
            }
        }

        Wall {
            id: ground
            height: 20
            anchors { left: parent.left; right: parent.right; bottom: parent.bottom }
        }
        Wall {
            id: ceiling
            height: 20
            anchors { left: parent.left; right: parent.right; top: parent.top }
        }
        Wall {
            id: leftWall
            width: 20
            anchors { left: parent.left; bottom: ground.top; top: ceiling.bottom }
        }
        Wall {
            id: rightWall
            width: 20
            anchors { right: parent.right; bottom: ground.top; top: ceiling.bottom }
        }
    }

    Text {
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: 30
        font.family: "Slate"
        font.bold: true
        font.pointSize: 10
        color: "white"
        text: world.boxCount
        visible: screen.state === "playing"
    }

    Text {
        id: timeDisplay
        property int time: 0
        y: 50
        x: screen.width - width - 30
        font.family: "Slate"
        font.bold: true
        font.pointSize: 20
        color: "white"
        text: Number(time/10).toFixed(1)
    }

    Text {
        id: yourTime
        anchors.bottom: timeDisplay.top
        anchors.bottomMargin: -20
        anchors.left: screen.left
        anchors.leftMargin: 40
        text: "Your time:"
        font.family: "Slate"
        font.bold: true
        font.pointSize: 10
        color: "white"
        opacity: 0
    }

    Text {
        id: replay
        z: 3
        anchors.bottom: screen.bottom
        anchors.bottomMargin: 30
        anchors.left: screen.left
        anchors.leftMargin: 60
        text: "Retry"
        font.family: "Slate"
        font.bold: true
        font.pointSize: 25
        color: "white"
           opacity: 0
        MouseArea {
            anchors.fill: parent
            onClicked: screen.startGame()
        }
        NumberAnimation { running: yourTime.opacity>=0.8; target: replay; property: "opacity"; loops: Animation.Infinite
            duration: 1000; from:1.0; to: 0.4; easing.type: Easing.InOutQuad }
    }

    state: "playing"
    states: [
        State {
            name: "prepare"
        },
        State {
            name: "playing"
        },
        State {
            name: "gameover"
            PropertyChanges { target: timeDisplay; y: 120; x: screen.width/2 - timeDisplay.width/2 ; font.pointSize: 30 }
            PropertyChanges { target: yourTime; opacity: 1 }
            PropertyChanges { target: replay; opacity: 1 }
            PropertyChanges { target: highscore; opacity: 1 }
        }
    ]
    transitions: [
        Transition {
            from: "playing"
            to: "gameover"
            NumberAnimation{ target: timeDisplay; properties: "x,y"; duration: 2000; easing.type: Easing.InOutSine }
            NumberAnimation{ target: timeDisplay; property: "font.pointSize"; duration: 2000; easing.type: Easing.InElastic}
            NumberAnimation{ target: yourTime; property: "opacity"; duration: 4000; easing.type: Easing.InQuint}
            NumberAnimation{ target: highscore; property: "opacity"; duration: 4000; easing.type: Easing.Linear}
            NumberAnimation{ target: replay; property: "opacity"; duration: 6000; easing.type: Easing.InQuint}
        }
    ]

    Timer {
        id: gamtimer;
        interval: 100
        running: world.boxCount>0
        repeat: true
        onTriggered: timeDisplay.time++
    }

    Highscore {
        id: highscore
        anchors.centerIn: parent
        visible: parent.state === "gameover"
        opacity: 0
    }
}
