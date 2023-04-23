#include <stdio.h>

int main(){
char a;
printf("Enter a character:\n");
scanf("%c", &a);
if((a>=65 && a<=90)||(a>=97 && a<=122)){
printf("This ia a alphabet.\n");
if (a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117 ){
printf("Vowel\n");
}
else{
printf("Consonant\n");
}
}
else{
printf("This character is not a alphabet.\n");
}
return 0;
}