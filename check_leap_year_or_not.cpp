#include<iostream>
using namespace std;
int main()
{
    int y;

    cout<<"enter a year";
    cin>>y;

    if("y%4==0")
    {
        cout<<"given year is a leap year"<<endl;
    }
    else
    {
        cout<<"given year is not a leap year";
    }
}