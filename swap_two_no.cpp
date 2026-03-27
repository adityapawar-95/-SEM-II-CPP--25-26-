#include<iostream>
using namespace std;
int main()
{
   int a=5,b=9,t;
   t=a;
   a=b;
   b=t;
   cout<<"value of a after swap is";
   cout<<a<<endl;
   cout<<"value of b after swap is";
   cout<<b;
}