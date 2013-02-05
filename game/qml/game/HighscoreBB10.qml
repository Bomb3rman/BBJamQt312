import QtQuick 1.1

Rectangle {
    width: 500
    height: 600
    color: "grey"
    opacity: 0.5
    radius: 0.7
    border.color: "darkgrey"
    border.width: 2

    Text {
        id: title
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.margins: 30
        text: "The Highscore"
        font.pixelSize: 25
        color: "white"
    }
    ListModel {
        id: model
    }

    Text {
        visible: !scoreloop.scoreAvailable
        anchors.centerIn: parent
        text: "Loading..."
        font.pixelSize: 10
        color: "white"
    }

    ListView {
        clip: true
        anchors.top: title.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: currentUser.bottom
        anchors.margins: 20
        model: scoreloop
        visible: scoreloop.scoreAvailable
        Rectangle {
            anchors.fill: parent
            color: "transparent"
            border.color: "black"
            border.width: 2
        }

        delegate: Rectangle {
            anchors.right: parent.right
            anchors.left: parent.left
            height: score.height + 10
            color: "transparent"
            Text {
                id: score
                anchors.right: parent.right
                anchors.rightMargin: 10
                anchors.verticalCenter: parent.verticalCenter
                text: model.score
                font.pointSize: 5
                color: "white"
            }
            Text {
                id: rank
                anchors.left: parent.left
                anchors.leftMargin: 10
                anchors.verticalCenter: parent.verticalCenter
                text: model.rank + " :"
                font.pointSize: 5
                color: "white"
            }
            Text {
                anchors.left: rank.right
                anchors.leftMargin: 5
                anchors.verticalCenter: parent.verticalCenter
                text: model.user
                font.pointSize: 5
                color: "white"
            }
        }
    }

    Text {
        id: currentUser
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.margins: 8
        text: "Current user:" + scoreloop.userName
        font.pointSize: 7
        color: "white"
    }

    onVisibleChanged: {
        if (visible === true) {
            scoreloop.submitNewScore(timeDisplay.text);
            scoreloop.requestScores()
        }
    }
}
