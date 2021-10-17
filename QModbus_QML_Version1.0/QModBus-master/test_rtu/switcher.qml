import QtQuick 2.0
import QtQuick.Controls 2.13


Rectangle{
    id: rec01
    x: 0
    y: 0
    width: 400
    height: 400
    color: "#7f7777"
    clip: true
    signal switch01(bool checked);
    signal switch02(bool checked);
    GroupBox {
        id: groupBox
        x: 100
        y: 139
        width: 193
        height: 176
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
                        sw01.text = "ON"
                        sw01.checked = true
                        sw02.text = "ON"
                        sw02.checked = true
                        sw03.text = "ON ALL"

                    }
                    else
                    {
                        sw01.text = "OFF"
                        sw01.checked = false
                        sw02.text = "OFF"
                        sw02.checked = false
                        sw03.text = "OFF ALL"
                    }


                }

            }
        }
    }

    Rectangle {
        id: rectangle
        x: 307
        y: -126
        width: 200
        height: 200
        color: "#211e1e"
        clip: true
        rotation: 45
    }
}




