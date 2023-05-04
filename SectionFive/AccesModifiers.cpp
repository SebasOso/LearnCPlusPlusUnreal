/*#include <iostream>
#include <string.h>
using namespace std;
class Creature
{
public:
	Creature();
	~Creature();
	void SetName(string name);
	void CreatureInfo();
	string GetName();
	float GetHealth();
	void TakeDamage(float otherDamage);
private:
	float health;
	string name;
	float damage;
protected:
	int numberOfHeads;
};
class Hidra : public Creature
{
public:
	Hidra();
	int GetNumberOfHeads();
};
int main(void)
{
	Hidra* myHidra = new Hidra();
	Creature * myCreature = new Creature();
	myCreature->SetName("Aare");
	myCreature->CreatureInfo();
	cout << "Aare name is: " << myCreature->GetName() << endl;
	myCreature->TakeDamage(100.f);
	if (myCreature->GetHealth()<= 0.f)
	{
		delete myCreature;
	}
	myHidra->CreatureInfo();
	cout << myHidra->GetName() << " has " << myHidra->GetNumberOfHeads() << " number of heads." << endl;
	delete myHidra;
	return 0;
}
Hidra::Hidra()
{
	numberOfHeads = 3;
	SetName("Hati");
	cout << "A new Hidra has born!" << endl;
}
Creature::Creature()
{
	health = 100.f;
	damage = 20.f;
	numberOfHeads = 1;
	cout << "A new creature has born!" << endl;
}
Creature::~Creature()
{
	cout << "Creature " << name << " has been destroyed!" << endl;
}
void Creature::SetName(string name)
{
	this->name = name;
}
void Creature::CreatureInfo()
{
	cout << "Creature name is: " << name << endl;
	cout << "Creature health is: " << GetHealth() << endl;
	cout << "Creature damage is: " << damage << endl;
	cout << "Creature number of heads: " << numberOfHeads << endl;
}
string Creature::GetName()
{
	return name;
}
float Creature::GetHealth()
{
	return health;
}
void Creature::TakeDamage(float otherDamage)
{
	float total = health - otherDamage;
	if (total <= 0.f)
	{
		cout << GetName() << " has died!" << endl;
		health = 0.f;
	}
	else
	{
		health -= otherDamage;
		cout << GetName() << " health is: " << GetHealth() << "." << endl;
	}
}
int Hidra::GetNumberOfHeads()
{
	return numberOfHeads;
}*/
