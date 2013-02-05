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

    ListView {
        clip: true
        anchors.top: title.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: enterHighscore.top
        anchors.margins: 20
        model: model
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
                text: model.time
                font.pointSize: 15
                color: "white"
            }
            Text {
                anchors.left: parent.left
                anchors.leftMargin: 10
                anchors.verticalCenter: parent.verticalCenter
                text: model.name
                font.pointSize: 15
                color: "white"
            }
        }
    }

    Item {
        id: enterHighscore
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        height: submit.height + 15
        Text {
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.margins: 10
            id: nameLabel
            text: "Enter name"
            color: "white"
            font.bold: true
            font.pointSize: 10
        }

        TextEdit {
            id: textEdit
            anchors.verticalCenter: submit.verticalCenter
            anchors.left: nameLabel.right
            anchors.right: submit.left
            anchors.margins: 10
            color: "white"
            Rectangle {
                anchors.fill: parent
                anchors.margins: -3
                color: "transparent"
                border.color: "white"
                border.width: 2
            }
        }

        Rectangle {
            id: submit
            height: 50
            width: 90
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.margins: 10
            radius: 5
            Text {
                anchors.centerIn: parent
                text: "Submit"
            }
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    saveHighScore(textEdit.text, timeDisplay.text)
                    showHighscore();
                    enterHighscore.visible = false
                }
            }
        }
    }
    onVisibleChanged: {
        if (visible === true) {
            showHighscore()
        }
    }

    function saveHighScore(name, time) {
        var db = openDatabaseSync("GameScores", "1.0", "High Scores tst", 25);
        var dataStr = "INSERT INTO Scorestst VALUES(?, ?)";
        var data = [name, time ];

        db.transaction(function(tx) {
            tx.executeSql('CREATE TABLE IF NOT EXISTS Scorestst(name TEXT, time NUMBER)');
            tx.executeSql(dataStr, data);
        });
    }

    function showHighscore() {
        var db = openDatabaseSync("GameScores", "1.0", "High Scores tst", 25);
        model.clear();
        db.transaction(function(tx) {
            tx.executeSql('CREATE TABLE IF NOT EXISTS Scorestst(name TEXT, time NUMBER)');

            var rs = tx.executeSql('SELECT * FROM Scorestst ORDER BY time LIMIT 10');
            for (var i = 0; i < rs.rows.length; i++) {
                model.append({"name" : rs.rows.item(i).name, "time": rs.rows.item(i).time})
            }
        });
    }
}
