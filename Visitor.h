#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
class Visitor:public Animal{
private:
    string visitorName;
    int ticketsBought;
public:
    void displayInfo();
    Visitor();
    Visitor(string name, int age, bool isHungry, string visitorName, int ticketsBought);
    ~Visitor();

};


#endif // VISITOR_H_INCLUDED
