#pragma once
#include "Animal.h"
class Dog:public Animal
{
    public:
    virtual void Noise() override; 
    void DogFunction();
};