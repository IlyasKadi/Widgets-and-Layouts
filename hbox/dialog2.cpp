#include "dialog2.h"
#include <QApplication>


Dialog2::Dialog2(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
}
void Dialog2::createWidgets()
{
    //Labels
    namelabel = new QLabel("Name");
    //Lines
    line   = new QLineEdit();
    //Buttons
    search  = new QPushButton("Search");
    close   = new QPushButton("Close");
    //checkboxes
    match    = new QCheckBox("Match case");
    backward = new QCheckBox("Search backward");
    //Layouts
    mainLayout    = new QHBoxLayout();
    topLeftLayout = new QHBoxLayout(); 
    rightLayout   = new QVBoxLayout(); 
    leftLayout    = new QVBoxLayout();
    setLayout(mainLayout);
    setWindowTitle("Nested Layout Test");
    resize(400,200);
 }
void Dialog2::placeWidgets()
{
    //Layouts structure
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    leftLayout->addLayout(topLeftLayout);
    //objects
    rightLayout->addWidget(search);
    rightLayout->addWidget(close);
    topLeftLayout->addWidget(namelabel);
    topLeftLayout->addWidget(line);
    leftLayout->addWidget(match);
    leftLayout->addWidget(backward);
    topLeftLayout->addSpacerItem(new QSpacerItem(15,0,QSizePolicy::Fixed));
    rightLayout->addSpacerItem(new QSpacerItem(10,50,QSizePolicy::Fixed));
}

