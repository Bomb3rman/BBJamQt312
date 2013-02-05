import QtQuick 1.1
import Box2D 1.0

Body {
    id: root
    width: 30
    height: 30
    sleepingAllowed: false
    bodyType: Body.Dynamic

    property alias color: rect.color
    property bool markForDestroy: false

    fixtures: Box {
        anchors.fill: parent
        density: 1
        friction: 0.3
        restitution: 0.5
        onPostSolve: {
            if (value>40) {
                if (!markForDestroy) {
                    root.destroy();
                    root.parent.boxCount = root.parent.boxCount-1;
                    markForDestroy = true
                }
            }
        }
    }
    Rectangle {
        id: rect
        smooth: true
        anchors.fill: parent
        color: "green"
    }
}
