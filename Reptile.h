#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
class Mammal:public Animal{
private:
    string furColor;
public:
    Mammal();
    Mammal(string name, int age, bool isHungry, string furColor);
    ~Mammal();

};


#endif // MAMMAL_H_INCLUDED
