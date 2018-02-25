#include "window3.h"
#include "window4.h"
#include "time.h"
#include <iostream>
#define WINDOW_HEIGHT 500
#define WINDOW_WIDTH 600
#define WINDOW_XPOS 450
#define WINDOW_YPOS 80


window3::window3(QWidget *parent) : QWidget(parent)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout<<ltm->tm_mday<<ltm->tm_mon<<"\n";

    userBirthday[0] = 25;
    userBirthday[1] = 02;
    title = new QLabel("ACCOUNT");
    displayName = new QLabel("Hello Frank");   //getusername
    bestScore = new QLabel("Best score:");     //getbestscore
    birthdayMessage = new QLabel();
    emptyLabel = new QLabel("");
    playButton = new QPushButton("Play");
    viewHistoryButton = new QPushButton("View History");
    logoutButton = new QPushButton ("Log Out");
    profilePicture = new QLabel();
    profilePicture -> setPixmap(QPixmap("winnie.png").scaled(100, 100));

    verticalLayout = new QVBoxLayout();
    gridLayout = new QGridLayout();
    groupBox = new QGroupBox();

    gridLayout -> addWidget(playButton, 0, 0, 1, 1);
    gridLayout -> addWidget(viewHistoryButton, 0, 1, 1, 1);
    gridLayout -> addWidget(logoutButton, 0, 2, 1, 1);

    verticalLayout -> addWidget(title, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(profilePicture, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(displayName, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(birthdayMessage, 0, Qt::AlignHCenter);
    if(ltm->tm_mday == userBirthday[0] && ltm->tm_mon == (userBirthday[1] - 1)) birthdayMessage->setText("Happy Birthday Frank!");
    verticalLayout -> addWidget(bestScore, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel, 0, Qt::AlignHCenter);
    verticalLayout -> addItem(gridLayout);

    setLayout(verticalLayout);

    setGeometry(WINDOW_XPOS, WINDOW_YPOS, WINDOW_WIDTH, WINDOW_HEIGHT);

    QObject::connect(viewHistoryButton, SIGNAL(clicked()), this, SLOT(changeToWindow4())); // couldn't pass argument for some reason
    //QObject::connect(logoutButton, SIGNAL(clicked()), this, SLOT(changeToWindow1())); // couldn't pass argument for some reason

}

void window3::changeToWindow4()
{
    hide();
    window4 * w4 = new window4();
    w4 -> show();
    delete(this);
}
