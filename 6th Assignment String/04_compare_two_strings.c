#include<stdio.h>
int mystrcmp(char[], char[]);
int main()
{
    char s1[100], s2[100];
    int compare;
    printf("\nEnter 1st string: ");
    gets(s1);
    printf("\nEnter 2nd string: ");
    gets(s2);
    compare = mystrcmp(s1, s2);
    if(compare == 1)
        printf("\nBoth the strings are exactly same.\n");
     else
        printf("\nBoth the strings are different.\n");
}
int mystrcmp(char x[], char y[])  // function definition
{
    int i = 0, flag = 0;
    while(x[i] != '\0' && y[i] != '\0') // until atleast one string ends
    {
        if(x[i] != y[i]) 
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0 && x[i] == '\0' && y[i] == '\0')
        return 1;
    else
        return 0;
}