#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    this->setMinimumWidth(300); //设置最小
    this->setMaximumWidth(300); //设置最大
    // 最终固定

    pb_logoin =new QPushButton("登录", this);
    pb_close =new QPushButton("退出", this);
    lb_name = new QLabel("username ",this);
    lb_paswd =new QLabel("passwd   ",this);
    le_name = new QLineEdit(this);
    le_passwd = new QLineEdit(this);
    remember = new QCheckBox("remember",this);
    passwd = new QCheckBox("pswdshow",this);


    QHBoxLayout *hbox1 =new QHBoxLayout;
    QHBoxLayout *hbox2 =new QHBoxLayout;
    QHBoxLayout *hbox3 =new QHBoxLayout;
    hbox1->addWidget(lb_name);
    hbox1->addWidget(le_name);
    hbox1->addWidget(remember);

    hbox2->addWidget(lb_paswd);
    hbox2->addWidget(le_passwd);
    hbox2->addWidget(passwd);

    hbox3->addWidget(pb_logoin);
    hbox3->addWidget(pb_close);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);
    vbox->addLayout(hbox3);
    setLayout(vbox);

   le_passwd->setEchoMode(QLineEdit::Password); //默认是密码方式显示
   le_passwd->setMaxLength(16); //密码框最多输入16个字符

   //密码显示复选框
    connect(passwd,SIGNAL(toggled(bool)),this,SLOT(pswd()));

}

Widget::~Widget()
{

}

void Widget::pswd()
{
    if(passwd->isChecked())
  //  lb_paswd->QLineEdit::Password;
   le_passwd->setEchoMode(QLineEdit::Normal);
   else
    le_passwd->setEchoMode(QLineEdit:: Password);
}
