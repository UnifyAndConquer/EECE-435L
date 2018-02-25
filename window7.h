#ifndef WINDOW7_H
#define WINDOW7_H

#include <QWidget>
#include <QtWidgets>
#include <QTableWidget>
#include <QGraphicsPixmapItem>


class window7 : public QWidget
{
    Q_OBJECT
public:
    explicit window7(QWidget *parent = nullptr);

private:
    QLabel * title, * emptyLabel;
    QTableWidget * rankingsTable;
    QTableWidgetItem * name1, * score1;

// useful for populating from database
//    QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1").arg(
//            pow(row, column+1)));
//        tableWidget->setItem(row, column, newItem);

    QStringList scoreTableHeaders;
    QPushButton * backButton;
    QVBoxLayout * verticalLayout;

public slots:
    void changeToWindow4();

};

#endif // WINDOW7_H
