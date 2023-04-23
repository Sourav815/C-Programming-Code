#include <stdio.h>

int main(){
int S1,S2,S3;
printf("Enter three side of this triangle: \n");
scanf("%d%d%d", &S1,&S2,&S3);
if ((S1+S2>S3)&&(S2+S3>S1)&&(S3+S1>S2)){
printf("This is a valid triangle.");
}
else{
printf("This is not a valid triangle.");
}
return 0;
}