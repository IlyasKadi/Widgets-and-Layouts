#ifndef DIALOG2_H
#define DIALOG2_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>



class Dialog2 : public QWidget
{
public:
    explicit Dialog2(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidgets();
protected:
    QLabel *namelabel;
    QLineEdit*line;
    QPushButton*search;
    QPushButton*close;
    QHBoxLayout*mainLayout;
    QVBoxLayout*rightLayout;
    QVBoxLayout*leftLayout;
    QHBoxLayout*topLeftLayout;
    QCheckBox*match;
    QCheckBox*backward;
};

#endif // DIALOG2_H
