#include<stdio.h>
int main()
{
    int i = 11;       //4 byte
    char ch = 'A';   //1 byte
    float f = 90.89f;   //4 byte
    double d = 90.15986;  //8 byte

    int Arr[5];            //20 byte
    float Brr[5];           //20 byte
    double Drr[5];            //40 byte
    char Crr[5];             //5 byte

    //%d pan chalel pan compiler nusar error yetat

    printf("%lu \n",sizeof(ch)); 
    printf("%lu\n", sizeof(i));
    printf("%lu \n",sizeof(f));
     printf("%lu \n",sizeof(d));


     printf("%lu \n",sizeof(Arr));
     printf("%lu \n",sizeof(Brr));
     printf("%lu \n",sizeof(Drr));
     printf("%lu \n",sizeof(Crr));

     printf("%lu \n",sizeof(Arr[0]));
     printf("%lu \n",sizeof(Brr[3])); 
     printf("%lu \n",sizeof(Crr[1]));
     printf("%lu \n",sizeof(Drr[2]));   
        
         return 0;
}








    
