#include <stdio.h>

int main(){
int A,B,C;
printf("Enter three angle of a tringle:\n");
scanf("%d%d%d", &A,&B,&C);
if (A+B+C==180)
{
printf("This is a valid triangle.");
}
else{
printf("This is not a valid triangle.");
}
return 0;
}