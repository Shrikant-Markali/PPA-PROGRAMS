#include<iostream>
using namespace std;
//class declaration
class Demo
{
  public:    //access specifier

  int no1;   //charactristics
  int no2;   //charactristics

  Demo()     //constructor
  {
    cout<<"Inside constructor\n";
    no1=11;
    no2=21;
  }
  ~Demo()    //Destructor
  {
    cout<<"Inside Destructure\n";
  }
  void fun()   //Behaviour
  {
    cout<<"Inside fun of Demo class\n";
  }
};

int main()

{
    cout<<"Inside main\n";
    Demo obj1;
    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";
    cout<<"Value of no1: "<<obj1.no1<<"\n";
        cout<<"Value of no2: "<<obj1.no2<<"\n";

        obj1.fun();
        


    return 0;
}