// cprogram for circular queue
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
int circularQueue[size], f = -1, r = -1, data, i;
void enqueue()
{
    if ((r == size - 1 && f == 0) || (f == (r + 1) % size))
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("\n\tEnter data/element:");
        scanf("%d", &data);
        if (r == -1)
        {
            r = 0;
            f = 0;
        }
        else
        {
            r = (r + 1) % size;
        }
        circularQueue[r] = data;
        printf("\n\tdata inserted:");
    }
}

void dequeue()
{
    if (f == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        data = circularQueue[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % size;
        }
        printf("\n\tdata deleted:");
        printf("%d", data);
    }
}
void display()
{
    if (f == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("\n\tCircular Queue:");
        if (f > r)
        {
            for (i = 0; i <= r; i++)
            {
                printf("%d", circularQueue[i]);
            }
            for (i = f; i < size - 1; i++)
            {
                printf("%d", circularQueue[i]);
            }
        }
        else
        {
            for (i = f; i <= r; i++)
            {
                printf("%d,", circularQueue[i]);
            }
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n\t#####queue operations#####");
        printf("\n\t1.enqueue");
        printf("\n\t2.deque");
        printf("\n\t3.display");
        printf("\n\t4.exit");
        printf("\nenter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;
        default:
            printf("\n\t enter valid choice?");
            break;
        }
    }
    return 0;
}
