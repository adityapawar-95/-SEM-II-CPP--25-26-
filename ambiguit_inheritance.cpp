#include<iostream>
using namespace std;

class Car
{
    int carCount;
   public:
   void get()
   {
       cout<<"Enter total car Count";
       cin>>carCount;
       cout<<"Total car Count = "<<carCount<<endl;
   }
};
class Bike
{
   public:
   void display()
   {
     cout<<"this is vehicle class"<<endl;
   }  
};
class Bike
{
    int bikeCount;
   public:
   void get1()
   {
     cout<<"Enter total bike count";
     cin>>bikeCount;
     cout<<"Total bike Count= "<<bikeCount<<endl;
   } 
};
class Vehicle : public car , public bike
{
   public:
   void display()
   {
     cout<<"this is vehicle class"<<endl;
   } 
};
int main()
{
    Vehicle v;
    v.get();
    v.get1();
    v.display();
}