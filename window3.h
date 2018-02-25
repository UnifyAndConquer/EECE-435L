#ifndef WINDOW3_H
#define WINDOW3_H

#include <QWidget>
#include <QtWidgets>


class window3 : public QWidget
{
    Q_OBJECT
public:
    explicit window3(QWidget *parent = nullptr);

private:
    int userBirthday[2];
    QLabel * title, * displayName, * profilePicture, * bestScore, * birthdayMessage, * emptyLabel;
    QPushButton * playButton;
    QPushButton * viewHistoryButton;
    QPushButton * logoutButton;

    QVBoxLayout * verticalLayout;
    QGridLayout * gridLayout;
    QGroupBox * groupBox;

public slots:
    void changeToWindow4();
};

#endif // WINDOW3_H
