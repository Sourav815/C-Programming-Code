//  Write a C program to print all alphabets from a to z. - using while loop
#include <stdio.h>

int main(){
int i;
printf("Enter a number to print alphabet (between 65-90 for capital and 97-122 for small):: \n");
scanf("%d", &i);
while((i>=65 && i<=90)||(i>=97 && i<=122)){
printf("%c ", i);
i++;
}
return 0;
}