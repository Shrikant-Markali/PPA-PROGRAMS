#include<iostream>
using namespace std;
class Base
{
   public:
    int A,B;
    void Fun()    //1000   
    { 
        cout<<"Base fun\n";
    }
   virtual void Gun()   //2000    
    {
        cout<<"Base Gun\n";
    }
    void Sun()   //3000     
    {
        cout<<"Base Sun\n";
    }
    virtual void Mun()   //4000
    {
        cout<<"Base Mun\n";
    }
};

class Derived : public Base
{
   public:
      int X,Y;
     virtual void Gun()   //  5000    
      {
        cout<<"Derived Gun\n";
      }
    virtual void Sun()   //   6000
      {
        cout<<"Derived Sun\n";
      }
    virtual void Run()   //   7000     
      {
        cout<<"Derived Run\n";
      }
};

int main()
{
  Derived dobj;
  Base *bp = &dobj;

  cout<<"Size of Base class is"<<sizeof(Base)<<"\n";
  cout<<"Size of derived class is "<<sizeof(Derived)<<"\n";

    bp->Fun();  //Base fun
    bp->Gun();  //Derived gun
    bp->Sun();  //Base sun
    bp->Mun();  //Base mun
   // bp->Run();  //error

    return 0;
}