#include<stdio.h>
int Addition(int NO1,int NO2)
{
    int sum=0;
     sum = NO1 + NO2;

}
int main()
{
     int A=10;
    int B=20;
    int c=0;
    printf ("inside the main function\n");
   
    c=Addition(A,B);
    printf("Addition of two numbers is %d",c);
    return 0;
}