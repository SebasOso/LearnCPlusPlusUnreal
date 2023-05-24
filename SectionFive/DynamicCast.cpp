#include <iostream>
#include <string.h>
using namespace std;
//________________________________
//Class Animal
class Animal
{
    public:
    virtual void Noise();

    void AnimalFunction()
    {
        cout<<"Animal function called.\n"<<endl;
    }
};
//_________________________________
//Class Dog From Animal
class Dog:public Animal
{
    public:
    virtual void Noise() override; 
    void DogFunction()
    {
        cout<<"Dog function called.\n"<<endl;
    }
};
//_________________________________
//Class Wolf From Animal
class Wolf:public Dog
{
    public:
    virtual void Noise() override;
    void WolfFunction()
    {
        cout<<"Wolf function called.\n"<<endl;
    }
};
//_________________________________
int main(void)
{
    Animal *myAnimal = new Animal();
    Dog *myDog = new Dog();
    Wolf *myWolf = new Wolf();
    Animal *AnimalArray[] =
    {
        myAnimal,
        myDog,
        myWolf
    };
    for (size_t i = 0; i < 3; i++)
    {
       //AnimalArray[i]->Noise();
        Animal *animal  = AnimalArray[i];
        /*Dog *dog = static_cast<Dog*>(animal);
        if(dog)
        {
            dog->DogFunction();
        }
        Wolf *wolf = static_cast<Wolf*>(animal);
        if(wolf)
        {
            wolf->WolfFunction();
        }*/
        Dog *dog = dynamic_cast<Dog*>(animal);
        if(dog)
        {
            dog->DogFunction();
        }
        Wolf *wolf = dynamic_cast<Wolf*>(animal);
        if(wolf)
        {
            wolf->WolfFunction();
        }
    }
    delete myDog;
    delete myWolf;
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