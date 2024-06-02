#include<stdio.h>
struct Hello
{
    int no;
    float f;
};

struct Demo
{
    int data;  //4
    struct Hello hobj;  //8
};

int main()
{
    struct Demo dobj;
    dobj.data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f=90.99;

    return 0;
    
}