#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void arrIt(QString st1)
    {
        QString st2 = st1, st3 = st1;
        std::sort(st2.begin(),st2.end());
        std::sort(st3.begin(),st3.end(),std::greater<QString>());
        qDebug() << st1 << "asc.  " << st2 << "\ndesc. " << st3;
    }







};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.arrIt("dgf354gajdkjhfg78686--");
    s1.arrIt("ajh86kbsh&*.klkjh=001");

    for(int i1=1;i1<200;i1++)
    {
    }
    return a.exec();
}
