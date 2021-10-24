import QtQuick 2.0

Item {
    width: 800
    height: 600

    Column{
        anchors.centerIn: parent
        Text {
            id: text1
            text: "Test"
            font{
                family: "Comic Sans MS"
            }
        }
    }
}
