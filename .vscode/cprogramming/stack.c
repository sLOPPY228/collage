#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
int stack[size], top = -1, data;
void push()
{
    if (top == size - 1)
    {
        printf("\n stack is3 full/overflow.");
    }
    else
    {
        top = top + 1;
    printf("\n enter the data:");
    scanf("%d", &data);
    stack[top] = data;
    printf("\nInserted....");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        data = stack[top];
        top = top - 1;
    printf("the popped data :%d\n", data);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("\nstack is empty/underflow.");
    }
    else
    {
        printf("\nstack elements are:");
        for (i = top; i >= 0; i--)
        {
            printf("%d,", stack[i]);
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n\t*****stack operations:******");
        printf("\n\t1,push operation");
        printf("\n\t2,pop operation");
        printf("\n\t3,display operation");
        printf("\n\t4,exit operation");
        printf("\n\tenter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("invalid choice");
            break;
        }
    }
}
