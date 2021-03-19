#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "friendcenterwindow.h"

bool isUsernameValid = false;
bool isPasswordValid = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->loginButton->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    FriendCenterWindow friendwindow;
    friendwindow.setModal(true);
    friendwindow.exec();
}

void MainWindow::on_passwordTextEdit_textChanged()
{
    if(ui->passwordTextEdit->toPlainText().length() > 0)
    {
        isPasswordValid = true;

        if(isUsernameValid)
        {
            ui->loginButton->setEnabled(true);
        }
    }else
    {
        isPasswordValid = false;
        ui->loginButton->setEnabled(false);
    }

    //qInfo(qUtf8Printable(ui->passwordTextEdit->toPlainText()));
}

void MainWindow::on_usernameTextEdit_textChanged()
{
    if(ui->usernameTextEdit->toPlainText().length() > 0)
    {
        isUsernameValid = true;

        if(isPasswordValid)
        {
            ui->loginButton->setEnabled(true);
        }
    }else
    {
        isUsernameValid = false;
        ui->loginButton->setEnabled(false);
    }

    //qInfo(qUtf8Printable(ui->usernameTextEdit->toPlainText()));
}
