#include<iostream>
using namespace std;

class Complex
{
    float x,y,z;
    public:
           void complex()
           {
            x = 0;y = 0;z = 0;
           }
           void complex(float a,float b,float c)
           {
            x = a;y = b;z = c;
           }
           void complex(complex & c)
           {
            x=c.x; y=c.y; z=c.z;
           }
};
int main()
{
    Complex c1;
    Complex c2(3,4,5);
    Complex c3(c1);
    Complex c4(c2);
}