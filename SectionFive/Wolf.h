#pragma once
#include "Dog.h"
class Wolf:public Dog
{
    public:
    virtual void Noise() override;
    void WolfFunction();
};