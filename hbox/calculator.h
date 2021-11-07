#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QLCDNumber>




class Calculator : public QWidget
{
public:
    explicit Calculator(QWidget *parent = nullptr);
protected:
    void makeConnexion();
    void createWidgets();
    void placeWidgets();
protected:
    //Layouts
    QGridLayout *mainGridlayout;
    //Buttons
    QVector<QPushButton*> calelements;
    QPushButton *element;
    //lcd
    QLCDNumber *lcdnum;
private:
    int k=0;
};

#endif // CALCULATOR_H
