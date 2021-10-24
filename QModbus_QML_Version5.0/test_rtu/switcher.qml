import QtQuick 2.0
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.3
import QtQuick.Extras 1.4



Rectangle{
    id: rec01
    x: 0
    y: 0
    width: 600
    height: 400
    color: "#040404"

    clip: true
    signal switch01(bool checked);
    signal switch02(bool checked);
    signal switch03All(bool checked);

    function showTemp(tempData)            //รับค่า Temp C++ มาโชว์ใน QML ต้องใช้ฟังก์ชัน
    {
        if(tempData>-50)
            label.text = tempData + "°c"
        else if(tempData<0)
            label.text = "-"+tempData
        else
            label.text = "ERROR"
    }


    GroupBox {
        id: groupBox
        x: 374
        y: 129
        width: 195
        height: 182
        bottomPadding: -9
        topPadding: 12
        font.bold: true
        title: qsTr("Light")

        Column {
            id: column
            x: 0
            y: 19
            width: 154
            height: 91

            Switch {
                id: sw01
                width: 200
                text: qsTr("OFF")
                font.weight: Font.Normal

                onCheckedChanged: {
                    //sw01.text = sw01.checked ? "ON" : "OFF";
                    if(sw01.checked)           //แบบที่ 1
                    {
                        rec01.switch01(true)
                        sw01.text = "ON"


                    }
                    else
                    {
                        rec01.switch01(false);
                        sw01.text = "OFF"
                    }


                }
            }
            Switch {
                id: sw02
                text: qsTr("OFF")
                font.bold: false
                onCheckedChanged: {
                    sw02.text = sw02.checked ? "ON" : "OFF";   //แบบที่ 2
                    if(sw02.text == "ON")
                        rec01.switch02(true);
                    else
                        rec01.switch02(false);
                }
            }

            Switch {
                id: sw03
                text: qsTr("OFF ALL")
                font.bold: false
                checked: false
                checkable: true
                onCheckedChanged: {
                    //sw01.text = sw01.checked ? "ON" : "OFF";
                    if(sw03.checked)           //แบบที่ 1
                    {
                        rec01.switch03All(true)
                        sw03.text = "ON"
                        sw01.checked = true
                        sw01.text = "ON"
                        sw02.checked = true
                        sw02.text = "ON"
                    }
                    else
                    {
                        rec01.switch03All(false)
                        sw03.text = "OFF"
                        sw01.checked = false
                        sw01.text = "OFF"
                        sw02.checked = false
                        sw02.text = "OFF"
                    }


                }

            }
        }
    }

    StackLayout {
        id: stackLayout
        x: 57
        y: 78
        width: 293
        height: 209
        currentIndex: tabBar.currentIndex
        DateAndTime{
            width: 263
            height: 68

        }

        Label {
            id: label
            width: 172
            height: 49
            text: qsTr("Temp")
            font.pointSize: 18
        }
    }

    TabBar {
        id: tabBar
        x: 57
        y: 286
        width: 293
        height: 41
        currentIndex:  stackLayout.currentIndex
        TabButton {
            id: tabButton
            x: 0
            y: 12
            width: 151
            height: 48
            text: qsTr("Time")
        }

        TabButton {
            id: tabButton1
            x: 152
            y: 0
            width: 141
            height: 48
            text: qsTr("Temp")
            wheelEnabled: false
        }
    }

    ComboBox {
        id: comboBox
        x: 398
        y: 44
        width: 134
        height: 43
        currentIndex: 0
        flat: true
        model: ["KOM","JJ"]

    }


    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: 600
        height: 400
        color: "#ffffff"
        visible: false
    }




    /*Column{
        x: 0
        width: 252
        height: 18
        anchors.verticalCenterOffset: -183
        anchors.horizontalCenterOffset: -31
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
        }
    Timer{
        interval: 500
        running: true
        repeat: true

        onTriggered: {
            var date = new Date()
            text1.text = date.toLocaleTimeString(Qt.locale("en_US"), "hh:mm:ss ")
            text2.text = date.toLocaleDateString(Qt.locale("en_US"))
        }
    }*/
    Switch {
        id: element
        x: 97
        y: 16
        text: qsTr("lock")
        checked: false
        onCheckedChanged: {
            if(element.checked)
                rectangle.visible  = true
            else
                rectangle.visible = false
        }
    }
}




