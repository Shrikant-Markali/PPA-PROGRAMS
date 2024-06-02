#include<iostream>
using namespace std;

class Demo
{
  public:
   int no1,no2;    //non static characteristics
   static int x;   // static characteristics

   Demo()
   {
    no1= 10;
    no2= 20;

   }

   void fun()  //non static behaviour
   {
    cout<<"Inside fun\n";
    cout<<no1<<"\n";
    cout<<x;
   }

   static void Gun()  // static behaviour
   {
    cout<<"Inside gun\n";
    cout<<x<<"\n";
   }
};

int Demo :: x = 11;
int main()
{
    cout<<"Value of x is:"<<Demo::x<<"\n";  //11
    Demo::Gun();

    Demo obj1;
    Demo obj2;

    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";
    cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
    cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";

    obj1.fun();
    obj2.fun();

    obj1.Gun();
    cout<<"Value of x using object is:"<<obj1.x<<"\n";

    return 0;
}