#include<iostream>
using namespace std;
class Patient
{
    private:
       string name;
       int age;
    protected:
       string hospitalID;
    public:
  
       void setDetails(string n,int a)
       {
           name = n;
           age = a;
       }
       void getdata()
       {
         cout<<"Enter hospitalID"
         cin>>hospitalID;
         cout<<hospitalID;
       }
       void displayDetails()
       {
         cout << "Name: " << name << ", Age: " << age << endl;
       }
};
int main()
{
    Patient obj;
    obj.setDetails("abc",98);
    obj.displayDetails();
    obj.getdata();
}