#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

int main(int argc, char *argv[])
{
    Person per;
    Father pa;
    Mother ma;
    Daughter dina;
    Son me;

    QCoreApplication a(argc, argv);
    
    return a.exec();
}
