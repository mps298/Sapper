#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    qDebug()<< "translation loaded = "<<translator.load(QLocale::Russian, "sapper", "_");
    a.installTranslator(&translator);


    qsrand(QTime::currentTime().msec());
    MainWindow w;
    w.show();
    w.setFixedSize(w.width(), w.height());

    return a.exec();
}
