#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;
    Animal::Animal(){
        name="";
        age=0;
        isHungry=false;
    }
    Animal::Animal(string name,int age, bool isHungry){
        this->name=name;
        this->age=age;
        this->isHungry=isHungry;
    }
    void Animal::display(){
        cout<<name<<"( "<< "age: "<<age;
        if(isHungry)
        cout<<"Hungry"<<")"<<endl;
        else
        cout<<"Not Hungry"<<")"<<endl;
    }
    void Animal::feed(){
        if(isHungry)
        cout<<"Hungry"<<endl;
        else
        cout<<"Not Hungry"<<endl;
    }
    Animal::~Animal(){

    }
    string Animal::getName(){
        return name;
    }
    int Animal::getAge(){
        return age;
    }
    bool Animal::getisHungry(){
        return Hungry;
    }
    Mammal::Mammal():Animal(){
        furColor="";
    }
    Mammal::Mammal(string name,int age,bool isHungry,string furColor):Animal(name, age,
    isHungry){
        this->furColor=furColor;
    }

    Mammal::~Mammal(){
    }

    Bird::Bird():Animal(){
        wingSpan=0;
    }

    Bird::Bird(string name,int age,bool isHungry,float wingSpan):Animal(name,age,isHungry){
        this->wingSpan=wingSpan;
    }
    Bird::~Bird(){
    }
    Reptile::Reptile():Animal(){
        isVenomous=false;
        }
    Reptile::Reptile(string name,int age, bool isHungry,bool isVenomous):Animal(name,age,isHungry){
        this->isVenomous=isVenomous;
    }
    Reptile::~Reptile(){
    }
    Enclosure::Enclosure(){
        capacity=0;
        currentCount=0;
        animal=NULL;
    }
    Enclosure::Enclosure(string name,int age, bool isHungry, int capacity, int currentCount):Animal(name,age,isHungry){
        this->capacity=capacity;
        this->currentCount=currentCount;
        animal=new Animal[capacity];
    }
    void Enclosure::addAnimal(Animal* a){
        if(capacity<currentCount){
            animal[currentCount]=a;
            currentCount++;
        }
        else{
            cout<<"no space"<<endl;
        }

    }
    void Enclosure::displayAnimals(){
        for(int i=0;i>currentCount;i++)
         animal[i].display();
    }
    Enclosure::~Enclosure(){
        delete animal[];
    }
    Visitor::Visitor(){
        visitorName="";
        ticketsbought=0;
    }
    Visitor::Visitor(string name, int age, bool isHungry, string visitorName, int ticketsBought):Amimal(name,age,isHungry){
      this->visitorName=visitorName;
      this->ticketsBought=ticketsBought;
    }
    void Visitor::displayInfo(){
        cout<<"Visitor Name:"<<visitorName<<endl;
        cout<<"Tickets Bought:"<<ticketsBought<<endl;
    }
    Visitor::~Visitor(){
    }
int main(){
Enclosure enclosure(3,5);
Animal->a1=new["Lion",5, true, "Hungry" ];
Animal->a2=new["Parrot", 2, true, "Not Hungry"];
Animal->a3=new["Snake", 3, false, "Hungry"];

enclosure.addAnimal[a1];
enclosure.addAnimal[a2];
enclosure.addAnimal[a3];
Visitor v{"Sarah Ali", 3};
enclosure.display();
v.display();
return 0;
}
