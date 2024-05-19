import QtQuick
import QtQuick.Window

Window {
    visible: true
    width: 640
    height: 480
    title: "Card Example"

    Item {
        height: 200
        width: 100

        Image {
            anchors.fill: parent
            source: "qrc:/images/h1.png"
        }
    }
}
