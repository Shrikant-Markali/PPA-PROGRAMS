#include<iostream>
using namespace std;

class Aritmatic
{
  public :
    int no1;
    int no2;

    Aritmatic()
    {
        cout<<"Inside Default Constructor\n";
        no1 = 0;
        no2=0;
    }

    Aritmatic(int A, int B)
    {
        cout<<"Inside parameterised constructor\n";
         no1 = A;
         no2 = B;
    }

    Aritmatic(Aritmatic &ref)
    {
        cout<<"Inside copy constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;
    }
    ~Aritmatic()
    {
        cout<<"Inside destructor\n";
    }

};

int main()
{
  Aritmatic obj1;
  Aritmatic obj2(11,21);
  Aritmatic obj3(obj2);

  cout<<obj1.no1<<"\t"<<obj1.no2<<"\n";
  cout<<obj2.no1<<"\t"<<obj2.no2<<"\n";
  cout<<obj3.no1<<"\t"<<obj3.no2<<"\n";

    return 0;
}