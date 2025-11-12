#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
class Bird:public Animal{
 private:
     float wingSpan;
 public:
    Bird();
    Bird(string name, int age,bool isHungry, float wingSpan);
    ~Bird();
};


#endif // BIRD_H_INCLUDED
