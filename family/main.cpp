#include <QCoreApplication>
#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

int main(int argc, char *argv[])
{
    Daughter dina;

    QCoreApplication a(argc, argv);
    
    return a.exec();
}
