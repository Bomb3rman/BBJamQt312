import QtQuick 1.1
import QtMobility.sensors 1.2

Accelerometer {
    Component.onCompleted: start()
    onReadingChanged: world.gravity = Qt.point(-reading.x, -reading.y)
}
