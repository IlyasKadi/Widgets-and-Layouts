#ifndef DIALOGE1_H
#define DIALOGE1_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>

class dialoge1 : public QWidget
{
public:
    explicit dialoge1(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidgets();
protected:
    QLabel *namelabel;
    QLineEdit*line;
    QPushButton*search;
    QHBoxLayout*hlayout;
};

#endif // DIALOGE1_H
