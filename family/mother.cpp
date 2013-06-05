#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

Mother::Mother()
{
    cout << "I am the mother constructor!" << endl;
}

Mother::~Mother()
{
    cout << "mother deconstructor!" << endl;
}
