#include "mainwindow.h"

#include <QApplication>
#include <QSysInfo>
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    if(!(QSysInfo::productType() == "windows"))
    {
        QMessageBox::critical(&w, QObject::tr("Not Supported"),QObject::tr("This program only supports Windows,\nClick \"OK\" Button to Quit."));
        return -1;
    }else if(!(QSysInfo::productVersion() == "10"))
    {
        QMessageBox::critical(&w, QObject::tr("Only Supported Win10 and Win11"),QObject::tr("This program only supports Windows 10 and 11,\nClick \"OK\" Button to Quit."));
        return -2;
    }
    w.show();
    return a.exec();
}
