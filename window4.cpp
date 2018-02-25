#include "window4.h"
#include "window3.h"
#include "window7.h"

#define WINDOW_HEIGHT 500
#define WINDOW_WIDTH 600
#define WINDOW_XPOS 450
#define WINDOW_YPOS 80


window4::window4(QWidget *parent) : QWidget(parent)
{
    title = new QLabel("PLAY HISTORY");
    emptyLabel = new QLabel(" ");
    displayName = new QLabel("Frank");
    profilePicture = new QLabel();
    yourBest = new QLabel("Your Best:");
    globalBest = new QLabel("Global Best:");
    backButton = new QPushButton("Back");
    viewRankingsButton = new QPushButton("View Rankings");
    scoreTable = new QTableWidget();
    date1 = new QTableWidgetItem("2018-02-21");
    score1 = new QTableWidgetItem("42");
    verticalLayout2 = new QVBoxLayout;
    gridLayout2 = new QGridLayout();
    gridLayout3 = new QGridLayout();
    groupBox = new QGroupBox;
    verticalLayout1 = new QVBoxLayout;
    scoreTableHeaders.append("Date");
    scoreTableHeaders.append("Score");
    scoreTableHeaders.append("Rank");
    profilePicture->setPixmap(QPixmap("winnie.png").scaled(100, 100));

    scoreTable -> setRowCount(20);  //adjust to dataset size
    scoreTable -> setColumnCount(3);    //for date, score and rank
    scoreTable -> setItem(0, 0, date1);
    scoreTable -> setItem(0, 1, score1);
    scoreTable -> setHorizontalHeaderLabels(scoreTableHeaders); //labels
    scoreTable -> setFixedWidth(338);

    verticalLayout2 -> addWidget(displayName, 0, Qt::AlignHCenter); //add picture here
    verticalLayout2 -> addWidget(profilePicture, 0, Qt::AlignHCenter);
    verticalLayout2 -> addWidget(emptyLabel, 0);
    verticalLayout2 -> addWidget(globalBest, 0, Qt::AlignHCenter);
    verticalLayout2 -> addWidget(emptyLabel, 0);        //setText [global best] here
    verticalLayout2 -> addWidget(yourBest, 0, Qt::AlignHCenter);
    verticalLayout2 -> addWidget(emptyLabel, 0);         //setText [your best] here

    gridLayout2 -> addWidget(scoreTable, 0, 0, 1, 1, Qt::AlignLeft);
    gridLayout2 -> addItem(verticalLayout2, 0, 1, 1, 1, Qt::AlignHCenter);   //user best & global best

    gridLayout3 -> addWidget(backButton, 0, 0, 1, 1);
    gridLayout3 -> addWidget(emptyLabel, 0, 1, 1, 1);
    gridLayout3 -> addWidget(viewRankingsButton, 0, 2, 1, 1);


    verticalLayout1 -> addWidget(title, 0, Qt::AlignHCenter);
    verticalLayout1 -> addWidget(emptyLabel, 0);
    verticalLayout1 -> addItem(gridLayout2);
    verticalLayout1 -> addWidget(emptyLabel, 0);
    verticalLayout1 -> addItem(gridLayout3);

    setLayout(verticalLayout1);

    setGeometry(WINDOW_XPOS, WINDOW_YPOS, WINDOW_WIDTH, WINDOW_HEIGHT);

    QObject::connect(backButton, SIGNAL(clicked()), this, SLOT(changeToWindow3())); // couldn't pass argument for some reason
    QObject::connect(viewRankingsButton, SIGNAL(clicked()), this, SLOT(changeToWindow7())); // couldn't pass argument for some reason

}

void window4::changeToWindow3()
{
    hide();
    window3 * w3 = new window3();
    w3 -> show();
    delete(this);
}

void window4::changeToWindow7()
{
    hide();
    window7 * w7 = new window7();
    w7 -> show();
    delete(this);
}
