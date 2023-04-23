#include <stdio.h>

int main()
{
    int Balance;
    int note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    printf("Enter your amount: ");
    scanf("%d", &Balance);
    note2000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    if (Balance >= 2000)
    {
        note2000 = Balance / 2000;
        Balance -= note2000 * 2000;
    }
    if (Balance >= 500)
    {
        note500 = Balance / 500;
        Balance -= note500 * 500;
    }
    if (Balance >= 200)
    {
        note200 = Balance / 200;
        Balance -= note200 * 200;
    }
    if (Balance >= 100)
    {
        note100 = Balance / 100;
        Balance -= note100 * 100;
    }
    if (Balance >= 50)
    {
        note50 = Balance / 50;
        Balance -= note50 * 50;
    }
    if (Balance >= 20)
    {
        note20 = Balance / 20;
        Balance -= note20 * 20;
    }
    if (Balance >= 20)
    {
        note20 = Balance / 20;
        Balance -= note20 * 20;
    }
    if (Balance >= 10)
    {
        note10 = Balance / 10;
        Balance -= note10 * 10;
    }
    if (Balance >= 5)
    {
        note5 = Balance / 5;
        Balance -= note5 * 5;
    }
    if (Balance >= 2)
    {
        note2 = Balance / 2;
        Balance -= note2 * 2;
    }
    if (Balance >= 1)
    {
        note1 = Balance;
    }
    printf("Total number of notes = \n");
    printf("2000 = %d\n", note2000);
    printf("500 = %d\n", note500);
    printf("200 = %d\n", note200);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
    return 0;
}