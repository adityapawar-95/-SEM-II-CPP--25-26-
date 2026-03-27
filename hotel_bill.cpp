#include<iostream>
using namespace std;
int main()
{
    int bill,quantity,discount,rate=100, table,name,contact;

   cout<<"enter the table no: ";
   cin>>table;
   cout<<"enter the name: ";
   cin>>name;
   cout<<"enter the quantity of pizza: "<<endl;
   cin>>quantity;
    bill= quantity*rate;
  discount= bill-(bill*20/100);
    cout<<"Final bill is: ";
    cout<<bill;
} 