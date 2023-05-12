#include <string.h>
#include <iostream>
using namespace std;
class Person
{
    public:
    virtual void SayHello();
};
void Person::SayHello()
{
    cout<<"Hello"<<endl;
}
class French:public Person
{
    public:
    void SayHello();
};
void French::SayHello()
{
    cout<<"Bonjour"<<endl;
}
class FrenchSouth:public French
{
    public:
    virtual void SayHello() override;
};
void FrenchSouth::SayHello()
{
    cout<<"BonjourSouth"<<endl;
}
int main (void)
{
    Person *person = new Person();
    person->SayHello();
    French *frenchMan = new French();
    frenchMan->SayHello();
    FrenchSouth *frenchSouthMan = new FrenchSouth();
    frenchSouthMan->SayHello();
    delete person;
    delete frenchMan;
    delete frenchSouthMan;
    return 0;
}