#include "calculator.h"
#include <QVector>

Calculator::Calculator(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
}
void Calculator::createWidgets()
{
    //Buttons
    for (int i=9;i>0;i--)
    {
        element  = new QPushButton(QString::number(i));
        calelements.push_back(element);
    }
    //LCDnum
    lcdnum  = new QLCDNumber();
    mainGridlayout = new QGridLayout;

    setLayout(mainGridlayout);
    setWindowTitle("Numeric Keypad");
    resize(340,320);
 }
void Calculator::placeWidgets()
{
    //Objects
    lcdnum->setMinimumHeight(80);
    mainGridlayout->addWidget(lcdnum,0,0,1,3);
    for (int i=1;i<=3 ;i++)
    {
        for (int j=0;j<=2;j++)
        {
            mainGridlayout->addWidget(calelements[k],i,j);
                    k++;
        }
    }
    mainGridlayout->addWidget(new QPushButton("0"),4,0);
    mainGridlayout->addWidget(new QPushButton("enter"),4,1,1,2);
}
