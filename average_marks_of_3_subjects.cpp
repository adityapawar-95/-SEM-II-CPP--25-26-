#include<iostream>
using namespace std;
int main()
{
    int phy,chem,math;
    cout<<"enter phy marks";
    cin>>phy;
    cout<<"enter chem marks";
    cin>>chem;
    cout<<"enter math marks";
    cin>>math;
    
    int avg;
    avg=(phy+chem+math)/3;

    cout<<"average of marks is";
    cout<<avg;
}