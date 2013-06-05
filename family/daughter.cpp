#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

Daughter::Daughter()
{
    cout << "Has both a mother and a father" << endl;
}

Daughter::~Daughter()
{
    cout << "Daughter Deconstructor!" << endl;
}
