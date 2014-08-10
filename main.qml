import QtQuick 2.2
import QtQuick.Window 2.1

Window {
    visible: true
    width: 360
    height: 360

    Text {
        text: _info.a
        anchors.centerIn: parent
    }

    Rectangle {
        id: btn_quit
        color: "red"
        width: 40; height: 40
        anchors {
            left: parent.left
        }
        Text {
            text: "Quit"
            anchors.fill: parent
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                Qt.quit();
            }
        }
    }

    Rectangle {
        id: btn_cmd
        color: "blue"
        width: 40; height: 40
        anchors {
            left: btn_quit.right
        }
        Text {
            text: "CMD"
            anchors.fill: parent
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                // Or you can use _info.setA(3)
                _info.a = 3
            }
        }
    }
}
