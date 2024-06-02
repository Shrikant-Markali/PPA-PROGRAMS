#include<stdio.h>
int main()
{
    int NO = 11;
    int *ptr = &NO;

    double Data = 90.9999;
    double *dptr = &Data;

    printf("%d\n",NO);  //11
    printf("%f\n",Data); //90.9999

    printf("%d\n",sizeof(NO)); //4
    printf("%d\n",sizeof(ptr)); //8
    printf("%d\n",sizeof(Data)); //8
    printf("%d\n",sizeof(dptr)); //8

    printf("%d\n",*ptr); //11
    printf("%f\n",*dptr); //90.9999






    return 0;
}