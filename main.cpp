
#include <iostream>
#include <QApplication>
#include "window3.h"
#include "window4.h"
#include "window6.h"
#include "window7.h"



int main(int argc, char **argv)
{
    QApplication game(argc, argv);

    window3 * w3 = new window3();
    w3 -> show();

//    window4 * w4 = new window4();
//    w4 -> show();

//    window6 * w6 = new window6();
//    w6 -> show();

//    window7 * w7 = new window7();
//    w7 -> show();

    return game.exec();
}
