#include<iostream>
using namespace std;

class Arithmatic
{
 public:
     
      int Addition(int no1, int no2)  //Addition@2ii
      {
        return no1 + no2;
      }

      int Addition (int no1 , int no2, int no3) //Additon@3iii
      {
        return no1+ no2 + no3;
      }

      double Addition(double no1, double no2)  //Addition@2dd
      {
        return no1 + no2;
      }

      double Addition(double no1 , double no2, double no3)  //Additon@3iii
      { 
        return no1 + no2 + no3;
      }
};

int main()
{
    Arithmatic obj;
    cout<<obj.Addition(11,21)<<"\n";
    cout<<obj.Addition(11,21,51)<<"\n";
    cout<<obj.Addition(89.90,21.56)<<"\n";

    cout<<obj.Addition(90.99,21.56,14.54)<<"\n";



    return 0;
}