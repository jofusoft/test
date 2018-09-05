#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QPushButton *pb_logoin, *pb_close;
    QLineEdit *le_name, *le_passwd;
    QCheckBox *remember ,*passwd;
    QLabel *lb_name, *lb_paswd;

private slots:
    void pswd();
};

#endif // WIDGET_H
