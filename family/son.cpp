#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

Son::Son()
{
    cout << "Son thinks he is the best and has both a mother and a father" << endl;
}

Son::~Son()
{
    cout << "Son deconstructor!" << endl;
}
