#include <QCoreApplication>
#include <iostream>
#include "person.h"
#include "father.h"
#include "mother.h"
#include "daughter.h"
#include "son.h"
using namespace std;

Father::Father()
{
    cout << "Father thinks he is the head of the family" << endl;
}

Father::~Father()
{
    cout << "Father deconstructor!" << endl;
}
