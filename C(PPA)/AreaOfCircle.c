#include<stdio.h>
float AreaOfCircle(float A,int radius)
{
    float ANS = 0;
    ANS = A*(radius*radius);
    return ANS;
}
int main()
{
    printf("Inside main function\n");
    const float pi = 3.14;
    int r = 4;
    float Area = 0;
    Area = AreaOfCircle(pi,r);
    printf("Area of circle is %f\n",Area);
    return 0;

}