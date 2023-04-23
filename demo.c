#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;
// void reverse(node *);
int main()
{
    char check;
    int val;
    node *start, *ptr, *newnode, *temp;

    newnode = (node *)malloc(sizeof(node));
    printf("Enter the value of node: ");
    scanf("%d", &val);
    newnode->data = val;
    start = ptr = newnode;
    while (ptr)
    {
        printf("Do you want to create another node?[Y/N]: ");
        fflush(stdin);
        scanf("%c", &check);
        if (check == 'N' || check == 'n')
        {
            ptr->link = NULL;
            break;
        }
        else
        {
            newnode = (node *)malloc(sizeof(node));
            printf("Enter the value of node: ");
            scanf("%d", &val);
            newnode->data = val;
            ptr->link = newnode;
            ptr = newnode;
        }
    }
    printf("-----------Node Value-------\n");
    ptr = start;
    printf("Start->");
    while (ptr)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }

    printf("\n-----------Node Value in Reverse-------\n");
    temp = NULL;
    while (temp != start)
    {
        ptr = start;
        while (ptr->link != temp)
        {
            ptr = ptr->link;
        }
        printf(" %d", ptr->data);
        temp = ptr;
    }

    // reverse(start);

    return 0;
}

// void reverse(node *temp)
// {
//     if (temp != NULL)
//     {
//         reverse(temp->link);
//         printf(" %d", temp->data);
//     }
// }