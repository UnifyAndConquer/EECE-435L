#ifndef WINDOW6_H
#define WINDOW6_H

#include <QWidget>
#include <QtWidgets>

class window6 : public QWidget
{
    Q_OBJECT
public:
    explicit window6(QWidget *parent = nullptr);

private:
    QLabel * title, * welcomeMessage, * emptyLabel;
    QPushButton * playButton;
    QPushButton * bestScoresButton;
    QPushButton * mainMenuButton;

    QVBoxLayout * verticalLayout;
    QGridLayout * gridLayout;

signals:

public slots:
};

#endif // WINDOW6_H
