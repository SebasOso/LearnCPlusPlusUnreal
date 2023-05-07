#include <iostream>
#include <string.h>
using namespace std;
class Weapon
{
    public:
    Weapon();
    ~Weapon();
    void PrintWeapon();
    private:
    int *weaponDamage;
    string *weaponName;
};
void Weapon::PrintWeapon()
{
    cout<<"Weapon name is: "<<*weaponName<<endl;
    cout<<"Weapon damage is: "<<*weaponDamage<<endl;
}
Weapon::Weapon()
{
    cout<<"A new weapon has been created"<<endl;
    weaponDamage = new int(45);
    weaponName = new string("Default");
}
Weapon::~Weapon()
{
    delete weaponDamage;
    delete weaponName;
    cout<<"Weapon destroyed"<<endl;
}
int main (void)
{
    Weapon *myWeapon = new Weapon();
    delete myWeapon;
    myWeapon = nullptr;
    return 0;
}