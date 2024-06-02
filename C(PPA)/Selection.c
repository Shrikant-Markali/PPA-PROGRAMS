#include<stdio.h>
int main()
{
int no = 0;
int ANS = 0;

printf("Enter number: \n");
scanf("%d",&no);

ANS = no % 2;
if(ANS==0)   // jar answer madhe 0 asel tar.
{
    printf("Number is even.\n");
}
else  //  nahitar.
{
    printf("Number is odd\n");
}
    return 0;
}
