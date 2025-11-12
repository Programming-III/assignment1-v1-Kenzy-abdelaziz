#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
    string name;
    int age;
    bool isHungry;
public:
    void display();
    void feed();
    Animal();
    Animal(string name, int age, bool isHungry);
    ~Animal();
    string getName();
    int getAge();
};


#endif // ANIMAL_H_INCLUDED
