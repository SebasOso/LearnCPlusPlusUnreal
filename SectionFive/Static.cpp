#include <iostream>
using namespace std;
int Average(int num);
float Sum(float num);
class Dog
{
    public:
    static int count; 
    static void AddCount();
};
void Dog::AddCount()
{
    count++;
}
int Dog::count = 0;
int main (void)
{
    int a = 0;
    float b = 0;
    Average(5);
    Average(4);
    Average(3);
    a = Average(1);
    cout<<"Average is: "<< a <<endl;
    Sum(45.1f);
    b = Sum(78.12f);
    cout<<"Sum total is: "<< b <<endl;
    for (size_t i = 0; i < 5; i++)
    {
        Dog::AddCount();
        cout<<"Dog count: "<<Dog::count<<endl;
    }
    return 0;
}
int Average(int num)
{
    static int count = 0;
    count++;
    static int sum = 0;
    sum+=num;
    static int average = 0;
    if(count > 0)
    {
        average = sum/count;
    }
    return average ;
}
float Sum(float num)
{
    static float total;
    total += num;
    return total;
}