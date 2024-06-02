#include<iostream>
using namespace std;

const int A = 10;
int B = 20;

class Demo
{
 public:
    int X,Y;
    Demo()
    {
        X = 10;
        Y = 20;
    }
    void fun(int i, const int j)
    {
        int no1 = 11;
        const int no2 = 21;
        i++;  //A
        j++;  //NA
        no1++;  //A
        no2++; //NA
    }
};

int main()
{
     Demo obj1;
     const Demo obj2;  //constant object
     obj1.fun(51,101);

     obj1.X++;  //A
     obj1.Y++;   //A
     obj2.X++;   //NA
     obj2.Y++;   //NA
     A++;       //NA
     B++;      //A
  
    return 0;
}