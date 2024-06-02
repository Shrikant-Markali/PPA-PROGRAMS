#include<iostream>
using namespace std;

class Base
{
  public:
  int A,B;
  Base()
  {
    cout<<"Inside Base constructor\n";
    A = 11;
    B = 21;
  }
  ~Base()
  {
    cout<<"Inside Base destructor\n";
  }
  void Fun()
  {
    cout<<"Inside Base fun\n";
  }

};

class Derived : public Base
{
  public:
   int x,y;

   Derived()
   {
    cout<<"Inside Derived constructor\n";
    x = 51;
    y = 101;
   }
   ~Derived()
   {
    cout<<"Inside Derived destructor\n";
   }
   void Gun()
   {
    cout<<"Inside Derived Gun\n";
   }
};
  class DerivedX : public Derived
  {
    public :
        int P;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            P = 111;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
  };

int main()
{
  DerivedX dobj;  //constructor of base constructor of derived constructor of Derivedx
  cout<<"Size of object is:"<<sizeof(dobj)<<"\n";
  cout<<dobj.A<<"\n";
  cout<<dobj.B<<"\n";
  cout<<dobj.x<<"\n";
  cout<<dobj.y<<"\n";
  cout<<dobj.P<<"\n";

    dobj.Fun();   //Base fun
    dobj.Gun();    //Derived Gun
    dobj.Sun();    //Derivedx Gun


//destructor of Derivedx
//destructor of Derived
//destructor of Base
    return 0;
}