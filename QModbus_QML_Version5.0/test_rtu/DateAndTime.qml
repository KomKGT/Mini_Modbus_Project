import QtQuick 2.4
Rectangle {
    width: 400
    height: 100
    Column{
        x: 0
        width: 252
        height: 18
        anchors.verticalCenterOffset: -26
        anchors.horizontalCenterOffset: 0
        anchors.centerIn: parent
        Text {
                id: text1
                x: 90
                text: "Time"
                font{
                    family: "Times New Roman"
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
        Text {
                id: text2
                x: 90
                text: "Date"
                font{
                    family: "Times New Roman"
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
        Text {
                id: text3
                x: 90
                text: "Normal"
                font{
                    family: "Times New Roman"
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    Timer{
        interval: 500
        running: true
        repeat: true

        onTriggered: {
            var date = new Date()
            text1.text = date.toLocaleTimeString(Qt.locale("en_US"), "hh:mm:ss")
            if(text1.text == "16:11:00")
                text3.text = "wakeup 5555555+"
            text2.text = date.toLocaleDateString(Qt.locale("en_US"))
        }
    }
}
