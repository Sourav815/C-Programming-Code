#include <stdio.h>

int main(){
int a;
printf("Enter a number:\n");
scanf("%d", &a);
if(a>0){
printf("The number %d is positive.\n", a);
}
else if(a<0){
printf("The number %d is negative.\n", a);
}
else
{
printf("The number %d is Zero.\n", a);
}
return 0;
}