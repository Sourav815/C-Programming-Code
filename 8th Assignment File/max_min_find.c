#include <stdio.h>
#include <stdlib.h>
int main(int x, char* y[])
{
    int a,b;
    if(x != 3)
    {
        printf("Error! your argument counter is not matched");
    }
    else
    {
        a= atoi(y[1]);
        b= atoi(y[2]);
        
        if (a<b)
        {
            printf("%d is the greater than %d.",b,a);
        }
        else
        {
            printf("%d is the greater than %d.",a,b);
        }
        
    }

    return 0;
}