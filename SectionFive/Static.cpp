#include <iostream>
using namespace std;
int Average(int num);
float Sum(float num);
int main (void)
{
    Average(5);
    Average(4);
    Average(3);
    cout<<"Average is: "<<Average(0)<<endl;
    Sum(45.1f);
    Sum(78.12f);
    cout<<"Sum total is: "<<Sum(0)<<endl;
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