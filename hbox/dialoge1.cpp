#include "dialoge1.h"

dialoge1::dialoge1(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
}
void dialoge1::createWidgets()
{

    namelabel   = new QLabel("Name");
    line        = new QLineEdit();
    search      = new QPushButton("Search");
    hlayout     = new QHBoxLayout();

    setLayout(hlayout);
    setWindowTitle("QHBoxLayout Test");

 }
void dialoge1::placeWidgets()
{
    hlayout->addWidget(namelabel);
    hlayout->addWidget(line);
    hlayout->addWidget(search);
}
