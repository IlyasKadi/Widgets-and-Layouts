#ifndef BUGREPFORM_H
#define BUGREPFORM_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QTextEdit>
#include <QComboBox>

class BugRepForm: public QWidget
{
public:
    explicit BugRepForm(QWidget *parent = nullptr);
protected:
    void makeConnexion();
    void createWidgets();
    void placeWidgets();
protected:
    //Layouts
    QVBoxLayout *mainlayout;
    QVBoxLayout *toplayout;
    QHBoxLayout *midlayout;
    QHBoxLayout *botlayout;
    QHBoxLayout *namelayout;
    QHBoxLayout *companylayout;
    QHBoxLayout *phonelayout;
    QHBoxLayout *emaillayout;
    QHBoxLayout *problemTlayout;
    QHBoxLayout *summinfolayout;
    QHBoxLayout *reprodlayout;
    QHBoxLayout *combblayout;
    QHBoxLayout *resetlayout;
    QHBoxLayout *subm_layout;
    QHBoxLayout *not_slayout;
    //Labels
    QLabel *name;
    QLabel *company;
    QLabel *phone;
    QLabel *email;
    QLabel *problemT;
    QLabel *summinfo;
    QLabel *reprod;
    //Lines
    QLineEdit  *nameL;
    QLineEdit  *companyL;
    QLineEdit  *phoneL;
    QLineEdit  *emailL;
    QLineEdit  *problemTL;
    QTextEdit  *summinfoL;
    //Buttons
    QPushButton  *reset;
    QPushButton  *DONOTsubmit;
    QPushButton  *subBugRep;
    //Combo_Box
    QComboBox  *combB;
};

#endif // BUGREPFORM_H
