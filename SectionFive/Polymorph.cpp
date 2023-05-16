#include <iostream>
#include <string.h>
using namespace std;
//________________________________
//Class Animal
class Animal
{
    public:
    virtual void Noise();
};
//_________________________________
//Class Dog From Animal
class Dog:public Animal
{
    public:
    virtual void Noise() override; 
};
//_________________________________
//Class Husky From Dog
class Husky:public Dog
{
    public:
    virtual void Noise() override;
};
//_________________________________
int main(void)
{
    Animal *myAnimal = new Animal();
    Dog *myDog = new Dog();
    Husky *myHusky = new Husky();

    Animal *AnimalArray[] =
    {
        myAnimal,
        myDog,
        myHusky
    };
    for (size_t i = 0; i < 3; i++)
    {
        AnimalArray[i]->Noise();
    }
    

    delete myAnimal;
    return 0;
}
void Animal::Noise()
{
    cout<<"Animal Noise() called."<<endl;
}
void Husky::Noise()
{
    cout<<"Hawwwwwwwwwwwwwwwww!"<<endl;
};
void Dog::Noise()
{
    cout<<"Woof woof!"<<endl;
};