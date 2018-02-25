#include "window6.h"

#define WINDOW_HEIGHT 500
#define WINDOW_WIDTH 600
#define WINDOW_XPOS 450
#define WINDOW_YPOS 80

window6::window6(QWidget *parent) : QWidget(parent)
{
    title = new QLabel("GUEST");
    welcomeMessage = new QLabel("Welcome!");
    playButton = new QPushButton("Play");
    bestScoresButton = new QPushButton("Best Scores");
    mainMenuButton = new QPushButton("Main Menu");

    verticalLayout = new QVBoxLayout();
    gridLayout = new QGridLayout();

    gridLayout -> addWidget(playButton, 0, 0, 1, 1);
    gridLayout -> addWidget(bestScoresButton, 0, 1, 1, 1);
    gridLayout -> addWidget(mainMenuButton, 0, 2, 1, 1);

    verticalLayout -> addWidget(title, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel);
    verticalLayout -> addWidget(welcomeMessage, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel);
    verticalLayout -> addItem(gridLayout);

    setLayout(verticalLayout);

    setGeometry(WINDOW_XPOS, WINDOW_YPOS, WINDOW_WIDTH, WINDOW_HEIGHT);
}
