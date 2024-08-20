#include <QCoreApplication>
#include "protocolzima.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ProtocolZIMA zima("COM3");
    return a.exec();
}
