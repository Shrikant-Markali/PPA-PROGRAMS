#include<iostream>
using namespace std;

class Arithmatic
{    
  public:
     int no1;
     int no2;

     Arithmatic()
     {
        no1 = 0;
        no2 = 0;
     }
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
     int Subtraction()
     {
        int Ans = 0;
       Ans = no1 - no2;
       return Ans; 
     }

};

int main()
{
     int value1 = 0, value2 = 0, Ret = 0;

      cout<<"Enter first number: \n";      
      cin>>value1;
      
      cout<<"Enter second number: \n";
      cin>>value2;

      Arithmatic obj(value1, value2);

      Ret = obj.Addition();
      cout<<"Addition is:"<<Ret<<"\n";

      Ret = obj.Subtraction();
      cout<<"Subtraction is:"<<Ret<<"\n";
      

    return 0;
}