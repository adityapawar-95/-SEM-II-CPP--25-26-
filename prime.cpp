#include<iostream>
using namespace std;
int main()
{
    int n,i,num=0;

    cout<<"enter a number";
    cin>>n;

    for(i=1;i<=0;i++){
        if(n%i==0)
        num++;
    }

    if(num==2)
    
        cout<<"given number is a prime no."<<endl;
    
    else
    
        cout<<"given number is not a prime no.";
    return 0;
}