
//  Write a C program to check whether a number is even or odd using switch case.
#include <stdio.h>

int main(){
int number;
printf("Enter a number: \n");
scanf("%d", & number);
switch (number%2)
{
case 0:
printf("This is even number.");
    break;
case 1:
printf("This is odd number.");
    break;
}
return 0;
}