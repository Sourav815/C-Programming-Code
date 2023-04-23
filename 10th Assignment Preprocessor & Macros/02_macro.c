// macro substitution

#include <stdio.h>

#define start  \
    int main() \
    {
#define intro printf("Enter two number respectively:");
#define sourav return 0;
#define end }

start int a, b, sum = 0;
intro
    scanf("%d%d", &a, &b);
sum = a + b;
printf("Sum = %d", sum);
sourav
    end