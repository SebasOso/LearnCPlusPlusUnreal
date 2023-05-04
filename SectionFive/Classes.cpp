
/*#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    string type;
    virtual void Noise() = 0;
    Animal();
    ~Animal();
};
Animal::Animal() :age(0) {};
Animal::~Animal()
{
    cout << "Animal destroyed: " <<name<< "." << endl;
}

class Dog : public Animal
{
public:
    Dog(string name, int age, string type);
    ~Dog();
    void Noise();
    void Info();
};
void Dog::Info()
{
    cout << "Dog name: " << name << endl;
    cout<<"Dog age: "<<age<<endl;
    cout << "Dog type: " << type << endl;
}

Dog::Dog(string name, int age, string type)
{
    this->name = name;
    this->age = age;
    this->type = type;
    cout << "A new dog has born!" << endl;
}

Dog::~Dog()
{
    cout << "Dog destroyed: " << name << endl;
}

void Dog::Noise()
{
    cout << "Guau guau." << endl;
}
class Husky :public Dog
{
public:
    Husky(string name, int age, string type, int hairAmount);
private:
    int hairAmount;
    void Report();
};
Husky::Husky(string name, int age, string type, int hairAmount):Dog(name, age, type)
{
    this->hairAmount = hairAmount;
    Report();
};
void Husky::Report()
{
    cout << "The name of your husky is: " << name << "." << endl;
    cout << "The age of your husky is: " << age << " years old." << endl;
    cout << "The type of your husky is: " << type << "." << endl;
    cout << "The hair amount of your husky is: " << hairAmount << " hair amount." << endl;
};
class Mut : public Dog
{
public:
    Mut(string name, int age, string type);
};
Mut::Mut(string name, int age, string type):Dog(name, age, type)
{
    cout << "A new Mut has born!" << endl;
}
int main(void)
{
    Animal* ivar = new Husky("Ivar", 3, "Canine, siberian", 65892);
    ivar->Noise();
    Mut myMut("Juco", 4, "Mut");
    myMut.Info();
    delete ivar;
    return 0;
}*/