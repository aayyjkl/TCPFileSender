#include "tcpfilesender.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TCPFileSender w;
    w.show();
    return a.exec();
}
