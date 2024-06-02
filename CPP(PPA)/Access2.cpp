#include<iostream>
using namespace std;

class Base
{
    public:
    int A;
    private:
    int B;
    protected:
    int C;
     
     public:
       Base()
       {
        A = 10,B = 20, C = 30;
       }
       void Fun()
       {
        cout<<A<<"\n";  //Allowed
        cout<<B<<"\n";   //Allowed
        cout<<C<<"\n";   //Allowed
       }
};

class Derived : public Base
{
   public :
    void Gun()
    {
        cout<<A<<"\n";    //Allowed
        cout<<B<<"\n";     //Not Allowed
        cout<<C<<"\n";      //Allowed
    }
};
int main()
{
   Base bobj;

   cout<<bobj.A<<"\n";        //Allowed
   cout<<bobj.B<<"\n";         //Not Allowed
   cout<<bobj.C<<"\n";

    return 0;
}