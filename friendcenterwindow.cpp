#include "friendcenterwindow.h"
#include "ui_friendcenterwindow.h"

FriendCenterWindow::FriendCenterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FriendCenterWindow)
{
    ui->setupUi(this);
}

FriendCenterWindow::~FriendCenterWindow()
{
    delete ui;
}
