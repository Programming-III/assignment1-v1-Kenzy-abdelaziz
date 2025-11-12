#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
class Enclosure{
private:
    Animal*animal;
    int capacity;
    int currentCount;
public:
    void addAnimal();
    void displayAnimals();
    Enclosure();
    Enclosure(string name, int age, bool isHungry, int capacity,int currentCount);
    ~Enclosure();
};


#endif // ENCLOSURE_H_INCLUDED
