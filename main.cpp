#include <QCoreApplication>
#include "protocolzima.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ProtocolZIMA zima("COM6");
    return a.exec();
}
