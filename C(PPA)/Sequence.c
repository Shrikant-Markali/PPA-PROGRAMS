#include<stdio.h>
int main()
{

    int NO1 = 0;
    int NO2 = 0;
    int ANS = 0;
    printf("Enter first number\n");
    scanf("%d",&NO1);

    printf("Enter second number\n");
    scanf("%d",&NO2);

    ANS = NO1 + NO2;
    printf("Addition is : %d",ANS);
    return 0;
}