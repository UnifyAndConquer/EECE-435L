#ifndef WINDOW4_H
#define WINDOW4_H

#include <QWidget>
#include <QtWidgets>
#include <QTableWidget>
#include <QGraphicsPixmapItem>



class window4 : public QWidget
{
    Q_OBJECT
public:
    explicit window4(QWidget *parent = nullptr);

private:
    QLabel * profilePicture, * title, * displayName, * emptyLabel, * yourBest, * globalBest;
    QPushButton * backButton,  *viewRankingsButton;
    QVBoxLayout * verticalLayout1;
    QVBoxLayout * verticalLayout2;
    QGridLayout *gridLayout2, *gridLayout3;
    QGroupBox * groupBox;

    QTableWidget * scoreTable;
    QTableWidgetItem * date1, *score1;

//for populating from database
//    QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(
//            pow(row, column+1)));
//        tableWidget->setItem(row, column, newItem);

    QStringList scoreTableHeaders;

signals:

public slots:
    void changeToWindow3();
    void changeToWindow7();
};

#endif // WINDOW4_H
