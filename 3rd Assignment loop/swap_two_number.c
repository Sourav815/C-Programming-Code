// Write a C program to swap two numbers using bitwise operator.
#include <stdio.h>

int main(){
int a, b;
printf("Enter two number: \n");
scanf("%d%d", &a,&b);
printf("Before using bitwise operator %d and %d\n", a,b);
a=a^b;
b=a^b;
a=a^b;
printf("After using bitwise operator %d and %d", a,b);
return 0;
}