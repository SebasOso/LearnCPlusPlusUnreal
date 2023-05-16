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
//Class Wolf From Animal
class Wolf:public Animal
{
    public:
    virtual void Noise() override;
};
//_________________________________
//Class Husky From Dog And Wolf
class Husky: public Wolf, public Dog
{
    public:
    virtual void Noise() override;
};
int main(void)
{
    Animal *myAnimal = new Animal();
    Dog *myDog = new Dog();
    Wolf *myWolf = new Wolf();
    Husky *myHusky = new Husky();
    myHusky->Wolf::Noise();
    myHusky->Dog::Noise();
    myHusky->Noise();
    Animal *AnimalArray[] =
    {
        myAnimal,
        myDog,
        myWolf
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
void Wolf::Noise()
{
    cout<<"Hawwwwwwwwwwwwwwwww!"<<endl;
};
void Dog::Noise()
{
    cout<<"Woof woof!"<<endl;
};
void Husky::Noise()
{
    cout<<"Owwww owww!"<<endl;
};