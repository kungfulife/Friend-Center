#ifndef FRIENDCENTERWINDOW_H
#define FRIENDCENTERWINDOW_H

#include <QDialog>

namespace Ui {
class FriendCenterWindow;
}

class FriendCenterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FriendCenterWindow(QWidget *parent = nullptr);
    ~FriendCenterWindow();

private:
    Ui::FriendCenterWindow *ui;
};

#endif // FRIENDCENTERWINDOW_H
