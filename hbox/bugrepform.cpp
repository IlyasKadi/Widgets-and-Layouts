#include "bugrepform.h"
#include <QApplication>

BugRepForm::BugRepForm(QWidget *parent) : QWidget(parent)
{
    createWidgets();
    placeWidgets();
}
void BugRepForm::createWidgets()
{
    //Layouts
    mainlayout         = new QVBoxLayout();
    toplayout          = new QVBoxLayout();
    midlayout          = new QHBoxLayout();
    botlayout          = new QHBoxLayout();
    namelayout         = new QHBoxLayout();
    companylayout      = new QHBoxLayout();
    phonelayout        = new QHBoxLayout();
    emaillayout        = new QHBoxLayout();
    problemTlayout     = new QHBoxLayout();
    summinfolayout     = new QHBoxLayout();
    reprodlayout       = new QHBoxLayout();
    combblayout        = new QHBoxLayout();
    resetlayout        = new QHBoxLayout();
    subm_layout        = new QHBoxLayout();
    not_slayout        = new QHBoxLayout();
    //Labels
    name      = new QLabel("Name:");
    company   = new QLabel("Company:");
    phone     = new QLabel("Phone:");
    email     = new QLabel("Email:");
    problemT  = new QLabel("Problem Title:");
    summinfo  = new QLabel("Summary information:");
    reprod    = new QLabel("Reproducibility:");
    //Lines
    nameL      = new QLineEdit();
    companyL   = new QLineEdit();
    phoneL     = new QLineEdit();
    emailL     = new QLineEdit();
    problemTL  = new QLineEdit();
    summinfoL  = new QTextEdit();
    //Buttons
    reset        = new QPushButton("Reset");
    DONOTsubmit  = new QPushButton("Don't Submit");
    subBugRep    = new QPushButton("Submit Bug Report");
    //Combo_Box
    combB   = new QComboBox;
    combB->addItem("Always");
    combB->addItem("Somtimes");
    combB->addItem("Rarely");

    setLayout(mainlayout);
    setWindowTitle("Report Bug");
    resize(600,600);
 }
void BugRepForm::placeWidgets()
{
    //Layouts structure
    mainlayout->addLayout(toplayout);
    mainlayout->addLayout(midlayout);
    mainlayout->addLayout(botlayout);

    toplayout->addLayout(namelayout);
    toplayout->addLayout(companylayout);
    toplayout->addLayout(phonelayout);
    toplayout->addLayout(emaillayout);
    toplayout->addLayout(problemTlayout);
    toplayout->addLayout(summinfolayout);

    midlayout->addLayout(reprodlayout);
    midlayout->addLayout(combblayout);

    botlayout->addLayout(resetlayout);
    botlayout->addLayout(subm_layout);
    botlayout->addLayout(not_slayout);
    //objects
    namelayout->addWidget(name);
    namelayout->addWidget(nameL);

    companylayout->addWidget(company);
    companylayout->addWidget(companyL);

    phonelayout->addWidget(phone);
    phonelayout->addWidget(phoneL);

    emaillayout->addWidget(email);
    emaillayout->addWidget(emailL);

    problemTlayout->addWidget(problemT);
    problemTlayout->addWidget(problemTL);

    summinfolayout->addWidget(summinfo);
    summinfolayout->addWidget(summinfoL);

    reprodlayout->addWidget(reprod);
    combblayout->addWidget(combB,1);
    resetlayout->addWidget(reset);
    subm_layout->addWidget(subBugRep);
    not_slayout->addWidget(DONOTsubmit);
    //spacing settings
    namelayout->setSpacing(132);
    companylayout->setSpacing(104);
    phonelayout->setSpacing(129);
    emaillayout->setSpacing(135);
    problemTlayout->setSpacing(72);
    summinfolayout->setSpacing(5);
    midlayout->setSpacing(60);
    resetlayout->addSpacerItem(new QSpacerItem(50,80,QSizePolicy::Expanding));
}


