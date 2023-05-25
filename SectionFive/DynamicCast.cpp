#include <iostream>
#include <string.h>
#include "Animal.h"
#include "Dog.h"
#include "Wolf.h"
using namespace std;
void InheritanceFunction()
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
}
int main(void)
{
    InheritanceFunction();
    return 0;
}