#include <stdio.h>
int main()
{
    int size, i, j, temp;
    printf("enter size of array:");
    scanf("%d", &size);
    int number[size];

    for (i = 0; i < size; i++)
    {
        printf("enter elements:");
        scanf("%d", &number[i]);
    }
    printf("unsorted elements:");
    for (i = 0; i < size; i++)
    {
        printf("|%d|", number[i]);
    }

    // sorting in ascending order
    for (i = 0; i < size; i++)
    {
        printf("\n%d Pass", (i + 1));
        for (j = 0; j < size - i - 1; j++)
        {
            printf("\n\t Iteration no %d", (j + 1));
            if (number[j] > number[j + 1])
            {
                printf("\n\tInterchanging occour:");
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
            else
            {
                printf("\n\tNO Interchanging");
            }
        }
    }

    // showing in ascending order
    printf("\nsorted numbers:\n");
    for (i = 0; i < size; i++)
    {
        printf("\n%d", number[i]);
    }

    return 0;
}