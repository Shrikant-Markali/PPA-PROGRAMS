#include<iostream>
using namespace std;

class Arithmatic
{    
  public:
     int no1;
     int no2;

    
     Arithmatic(int A, int B)
     {
        no1 = A;
        no2 = B;
     }
     int Addition()
     {
       int Ans = 0;
       Ans = no1 + no2;
       return Ans; 
     }
     

};

int main()
{
    int Ret = 0;

      Arithmatic obj(21, 11);

      Ret = obj.Addition();
      cout<<"Addition is:"<<Ret<<"\n";

    return 0;
}