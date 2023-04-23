#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* y[])
{
    int a,b,c;
    if(argc != 3)
    {
        printf("Error! your argument counter is not matched");
    }
    else
    {
        a=atoi(y[1]);
        b=atoi(y[2]);
        
        printf("Summation of two number: %d\n",a+b);
    }
    return 0;
}