#include<iostream>
using namespace std:
class Student
{
   int marks;
    
   public:
    void getdata()
    {
        cout<<"Enter the roll number:";
        cin>>roll_no;
        cout<<"Enter the marks "<<endl;
        cin>>marks;
    }
    void displaydata()
    {
        cout<<"Roll number: "<<roll_no<<endl;
        cout<<"Marks=  "<<marks<<endl;
    }
};
    
        int main()
    {
        cout<<"Welcome to object oriented programming"<<endl;
        Student s[5];
        int i;
        for(i=0;i<5;i++)
        {
            s[i].getdata();
        }
        cout<<"You have entered below student details";
        for(i=0;i<5;i++)
        {
            s[i].displaydata();
        }
        
    }