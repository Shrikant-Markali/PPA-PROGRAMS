#include<stdio.h>
int x = 101;

void Marvellous()
{
   int i = 21;
   int no = 51;

   printf("from marvellous value of no is: %d\n",no);
  printf("From marvellous value of i is: %d\n",i);   
  printf("from marvellous value of x is: %d\n",x);

}

int main()
{
  int no = 11;

  printf("from main value of no is: %d\n",no);
  printf("From main value of x is: %d\n",x); 

  Marvellous();  

    return 0;
}