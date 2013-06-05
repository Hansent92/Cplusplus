#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

Person::Person()
{
    cout << "this is the Family" << endl;
}

Person::~Person()
{
    cout << "Person deconstructor!" << endl;
}
