#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Dota 2 Drafter");
    w.setMinimumSize(w.size());
    w.setWindowIcon(QIcon(":/img/Pictures/Dota2Drafter.jpg"));
    w.show();
    return a.exec();
}
