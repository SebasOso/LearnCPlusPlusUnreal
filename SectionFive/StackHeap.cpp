/*#include <iostream>
#include <string.h>
using namespace std;
void Heap();
class Character
{
	public:
	Character();
	~Character();
	void SetName(string name);
	string GetName();
	void PrintCharacter();
	private:
	string name;
	float health;
};
Character::~Character()
{
	cout<<GetName()<<" have been destroyed."<<endl;
};
void Character::PrintCharacter()
{
	cout<<"My character name is: "<<GetName()<<"."<<endl; 
	cout<<"My character health is: "<<health<<"."<<endl;
}
void Character::SetName(string name)
{
	this->name = name;
};
string Character::GetName()
{
	return name;
};
Character::Character()
{
	cout<<"A new character has born!"<<endl;
	health = 100.f;
};
int main(void)
{
	Character * myCharacter = new Character();
	myCharacter->SetName("Sebastian");
	myCharacter->PrintCharacter();
	Heap();
	int* k = new int(5);
	cout << "My int k ptr is: " << *k << endl;
	delete k;
	k = new int(6);
	cout << "My int k ptr is: " << *k << endl;
	delete k;
	k = nullptr;
	delete myCharacter;
	myCharacter = nullptr;
	return 0;
};
void Heap()
{
	int* i = new int(4);
	cout << "My int ptr is: " << *i << endl;
	delete i;
	i = nullptr;
};*/