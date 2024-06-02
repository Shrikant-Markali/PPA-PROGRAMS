#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 11;
    float F = 11.11f;
    double D = 20.20153;

    char *cptr = &ch;
    int *ptr = &i;
    float *fptr = &F;
    double *dbtr = &D;
    return 0;
}