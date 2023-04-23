#include <stdio.h>

struct cricket
{
    char team[20];
    char player[20];
    int score[10];
    int total;
    float avg;
};

int main()
{
    struct cricket s[5];
    int i, n, j;
    printf("Enter the number of team to be recorded:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter team name:");
        scanf("%s", s[i].team);
        s[i].total = 0;
        for (j = 0; j < 2; j++)
        {
            printf("\nEnter team member name: ");
            scanf("%s", s[i].player[j]);
            fflush(stdin);
            printf("Enter team member score:");
            scanf("%d", &s[i].score[j]);
            s[i].total += s[i].score[j];
        }
        s[i].avg = (float)(s[i].total) / 5;
    }

    printf("\n-----------------------------------------------------------------------------------\n");
    printf("TEAMNAME\tBATSMANNAME\tSCORE\tTOTAL\tAVERAGE\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%s", s[i].team);
        for (j = 0; j < 2; j++)
        {
            printf("\t\t%s\t%d\n", s[i].player[j],s[i].score[j]);
        }
        // for (j = 0; j < 5; j++)
        // {
        //     printf("\t%d\n", s[i].score[j]);
        // }
        printf("\t\t\t%d\t%.2f\n", s[i].total, s[i].avg);
    }
    return 0;
}