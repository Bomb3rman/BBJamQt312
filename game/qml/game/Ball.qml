import QtQuick 1.1
import Box2D 1.0

Body {
    id: root
    width: 100
    height: 100
    fixedRotation: false
    sleepingAllowed: false

    fixtures: Circle {
        id: circleShape
        radius: width/2
        width: parent.width
        height: parent.height
        density: 1
        friction: 1
        restitution: 0.3
        x: 50
        y: 50
    }
    Image {
        source: "ball.png"
        width: parent.width
        height: parent.height
    }
}
