#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

Daughter::Daughter()
{
    cout << "I am the daughter constructor!" << endl;
}

Daughter::~Daughter()
{
    cout << "Daughter Deconstructor!" << endl;
}
