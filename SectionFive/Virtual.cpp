#include <string.h>
#include <iostream>
using namespace std;
class Object
{   
    public:
    virtual void BeginPlay();
};
class Actor : public Object
{
    public:
    virtual void BeginPlay() override;
};
class Pawn : public Actor
{
    public:
    virtual void BeginPlay() override;
};
void Pawn::BeginPlay()
{
    cout<<"Pawn BeginPlay() called."<<endl;
    Object::BeginPlay();
}
void Actor::BeginPlay()
{
    cout<<"Actor BeginPlay() called."<<endl;
};
void Object::BeginPlay()
{
    cout<<"Object BeginPlay() called."<<endl;
};
int main (void)
{
    Object *myObjectPtr = new Pawn();
    myObjectPtr->BeginPlay();
}