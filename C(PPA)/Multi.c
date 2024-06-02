#include<stdio.h>
int main()
{
    int Arr[4][5];
    Arr[2][2] = 11;
    Arr[0][1]=10;
    Arr[2][3] = 21;
    Arr[3][1]=30;
    Arr[0][2] = 51;
    Arr[1][2]=10;
    printf("%d\n",Arr[2][2]);
    printf("%d\n",Arr[0][1]);
    printf("%d\n",Arr[2][3]);
    printf("%d\n",Arr[3][1]);

    return 0;
}