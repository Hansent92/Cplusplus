#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

Mother::Mother()
{
    cout << "Mother is the head of the family" << endl;
}

Mother::~Mother()
{
    cout << "mother deconstructor!" << endl;
}
