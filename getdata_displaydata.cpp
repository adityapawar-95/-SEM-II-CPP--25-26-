#include <iostream>
using namespace std;

class Student 
{
    int roll no; marks;
    public;

    Void getdata()
    {
        cout<<"Enter roll no and marks";
        cin>>roll no>>marks;
    }

    Void displaydata()
    {
        cout<<"Student data="<<endl;
        cout<<roll no<<"    "<<marks;
    }
    int main()
     {
        Student S;
        S.getdata();
        S.displaydata();
     }
}