#include "window7.h"
#include "window4.h"

#define WINDOW_HEIGHT 500
#define WINDOW_WIDTH 600
#define WINDOW_XPOS 450
#define WINDOW_YPOS 80

window7::window7(QWidget *parent) : QWidget(parent)
{
    title = new QLabel("RANKINGS");
    emptyLabel = new QLabel(" ");
    rankingsTable = new QTableWidget();
    name1 = new QTableWidgetItem("Frank");
    score1 = new QTableWidgetItem("42");
    backButton = new QPushButton("Back");
    scoreTableHeaders.append("Name");
    scoreTableHeaders.append("Score");

    rankingsTable -> setRowCount(20);       //adjust to dataset size later
    rankingsTable -> setColumnCount(2);     //for name & score
    rankingsTable -> setItem(0, 0, name1);
    rankingsTable -> setItem(0, 1, score1);
    rankingsTable -> setHorizontalHeaderLabels(scoreTableHeaders); //labels
    rankingsTable -> setFixedWidth(338);

    verticalLayout = new QVBoxLayout();

    verticalLayout -> addWidget(title, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel, 0);
    verticalLayout -> addWidget(rankingsTable, 0, Qt::AlignHCenter);
    verticalLayout -> addWidget(emptyLabel, 0);
    verticalLayout -> addWidget(backButton, 0, Qt::AlignHCenter);

    setLayout(verticalLayout);

    setGeometry(WINDOW_XPOS, WINDOW_YPOS, WINDOW_WIDTH, WINDOW_HEIGHT);

    QObject::connect(backButton, SIGNAL(clicked()), this, SLOT(changeToWindow4())); // couldn't pass argument for some reason
}

void window7::changeToWindow4()
{
    hide();
    window4 * w4 = new window4();
    w4 -> show();
    delete(this);
}
