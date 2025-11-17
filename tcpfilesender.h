#ifndef TCPFILESENDER_H
#define TCPFILESENDER_H

#include <QDialog>

class TCPFileSender : public QDialog
{
    Q_OBJECT

public:
    TCPFileSender(QWidget *parent = nullptr);
    ~TCPFileSender();
};
#endif // TCPFILESENDER_H
