#include <iostream>
using namespace std;
int Avarage(int num);
int main (void)
{
    Avarage(5);
    Avarage(4);
    Avarage(3);
    cout<<"Avarage is: "<<Avarage(0)<<endl;
    return 0;
}
int Avarage(int num)
{
    static int count = 0;
    count++;
    static int sum = 0;
    sum+=num;
    static int avarage = 0;
    if(count > 0)
    {
        avarage = sum/count;
    }
    return avarage ;
}