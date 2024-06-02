#include<stdio.h>
int main()
{
    int no = 11;
    int *p = &no;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****z = &s;

    return 0;
}