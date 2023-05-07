#include <iostream>
#include <string.h>
using namespace std;
void Heap();
class Character
{
	public:
	Character();
	private:
	string name;
};
int main(void)
{
	Heap();
	int* k = new int(5);
	cout << "My int k ptr is: " << *k << endl;
	delete k;
	k = new int(6);
	cout << "My int k ptr is: " << *k << endl;
	delete k;
	k = nullptr;
	return 0;
};
void Heap()
{
	int* i = new int(4);
	cout << "My int ptr is: " << *i << endl;
	delete i;
	i = nullptr;
};
