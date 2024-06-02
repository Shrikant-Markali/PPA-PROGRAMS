#include<stdio.h>
int square(int b)
{
    int ANS = 0;
    ANS = b*b;
    return ANS;
}
int main()
{
    printf("Inside main function\n");
    int a = 5;
    int area = 0;
    area = square(a);
    printf("Area of square is %d\n",area);
    return 0;

}