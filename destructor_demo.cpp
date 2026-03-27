#include<iostream>
int count=0;
 Class demo
 {
    public:
          demo()
          {
            count ++;
            cout<<"\n No. of objects created"<<count;
          }
          ~demo()
          {
            cout<<"\n No. of objects destroyed"<<count;
            count--;
          }
 };
 int main()
 {
    cout<<"\n ENTER MAIN"<<endl;
    demo d1,d2,d3,d4;
    
    cout<<"\n \n Enter Block1 \n";
    demo d5;
 }
 {
    cout<<"\n \n Enter Block2 \n";
    demo d6;
 }
  cout<<"\n \n RE-ENTER MAIN \n";
  return 0;