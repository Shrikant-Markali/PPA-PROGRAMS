#include<iostream>
using namespace std;

class Demo
{
    public:
      int A,B;
      Demo(int i, int j)
      {
        cout<<"Inside constructor\n";
        A=i;
        B=j;
      }
};

int main()
{
    Demo obj1(10,20);
    Demo obj2(20,21);

    obj1 + obj2;

    return 0;
}