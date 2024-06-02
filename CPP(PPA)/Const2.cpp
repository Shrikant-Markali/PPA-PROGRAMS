#include<iostream>
using namespace std;

class Demo
{
 public:
    const int X;
    const int Y;
    int Z;

    Demo(int i, int j) : X(i), Y(j)
    {
     cout<<"Inside constructor\n";  
     Z = k;
    }
   
};

int main()
{
     Demo obj1(11,21,51);

     cout<<obj1.X<<"\n";
     cout<<obj1.Y<<"\n";
     cout<<obj1.Z<<"\n";

     //ob1.X++;  NA
    //ob1.Y++;  NA
    obj1.Z++;
  
    return 0;
}