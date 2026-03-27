#include<iostream>
using namespace std;
class Distance
{
    public:
    int feet, inch;

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
        cout << "\n The initial value of feet & inches : " << feet << " "
        << inch;
    }
    void operator--()
    {
        feet--;
        inch--;
        cout << "\n The value of feet & inches after Decrement:"
        << feet << " ' " << inch;
    }
};
int main()
{
    Distance d1(8,9);

    --d1;
}                     