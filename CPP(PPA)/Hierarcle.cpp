#include<iostream>
using namespace std;

class Marvellous
{
   public:
     int C;
     Marvellous()
     {
        C = 30;
        cout<<"Inside Marvellous\n";
     }
     ~Marvellous()
     {
        cout<<"Inside Marvellous Destructor\n";
     }

     void Sun()
     {
        cout<<"Inside sun of Marvellous\n";
     }

};

class Demo : public Marvellous
{
  public:
    int A;
    Demo()
    {
        A = 10;
        cout<<"Inside Demo constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside Demodestructor\n";
    }

    void Fun()
    {
        cout<<"Inside fun of Demo\n";
    }
};

class Hello : public Marvellous
{
   public:
     int B;
       Hello()
    {
        B = 20;
        cout<<"Inside Hello constructor\n";
    }
    ~Hello()
    {
        cout<<"Inside Hello destructor\n";
    }

    void Gun()
    {
        cout<<"Inside Gun of Hello\n";
    }
};



int main()
{
     Demo dobj;
     Hello hobj;

    return 0;
}