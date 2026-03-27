#include<iostream>
using namespace std;
class addition
{
    public:
    int add(int a, int b)
    {
     return a + b;
    }
    int add(int a, int b, int c)
    {
     return a + b + c;
    }
};
int main()
{
    int a,b,c;
    cout<<"enter value a,b and c";
    cin>>a>>b>>c;
    addition obj;

    cout << obj.add(a,b) << endl;

    cout << obj.add(a,b,c);
    
}   