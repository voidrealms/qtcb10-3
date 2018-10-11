#include <QCoreApplication>
#include <QDebug>

void test(QString* value) {
    qInfo() << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString* data = new QString("asjdajdlkasdjasdjlkasdlsadjlksjdaljalkdkljasdjasdjlkajdlkjasdjasdjaldlkasdlkajsdasdlkasdlasd");

    qInfo() << "Actual size:" << data->length();
    qInfo() << "Pointer size:" << sizeof(data);
    qInfo() << "Data:" << *data;
    qInfo() << "Sizeof:" << sizeof(*data);

    test(data);

    //SUPER FAST!!! memory access

    delete data;

    return a.exec();
}
