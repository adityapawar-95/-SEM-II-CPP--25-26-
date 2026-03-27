#include<iostream>
using namespace std;
inline void displayAvg(int num1, int num2, int num3)
{
    cout<<"avg:"<<(num1+num2+num3)/3<<endl;
}
int main()
{
    displayAvg(1,2,3);
}