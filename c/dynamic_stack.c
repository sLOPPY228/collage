#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *new_node, *current_node, *temp_node;
// used to assign memory block

void allocate_memory(int item)
{
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = item;
}
int list_length()
{
    int count = 0;
    if (head == NULL)
    {
        return 0;
    }
    current_node = head;
    while (current_node->next != NULL)
    {
        count = count + 1;
        current_node = current_node->next;
    }
    count = count + 1;
    return count;
}
void insert_node_from_end(int item)
{
    allocate_memory(item);
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        printf("\n\tend node not found\n currently list is empty\nSo,this node is the first and last node.");
    }
    else
    {
        current_node = head;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
        printf("\n\tend node not found\n node is inserted at the end.");
    }
}
void display_list()
{
    if (head == NULL)
    {
        printf("\n\tList is empty.\n");
    }
    else
    {
        current_node = head;
        printf("\n\tlist elements are:");
        printf("\n\t%d", current_node->data);
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
            printf("\n\t%d ", current_node->data);
        }
    }
}
void delete_node_form_end()
{
    if (head == NULL)
    {
        printf("\n\tList is empty");
    }
    else
    {
        if (head->next == NULL)
        {
            if (head == NULL)
            {
                printf("\n\tList is empty");
            }
            else
            {
                current_node = head;
                head = head->next;
                printf("\n\t the deleted item %d", current_node->data);
                free(current_node);
            }
        }
        else
        {
            current_node = head;
            while (current_node->next->next != NULL)
            {
                current_node = current_node->next;
            }
            printf("\n\t the deleated item is %d", current_node->next->data);
            free(current_node->next);
            current_node->next = NULL;
        }
    }
}
int main()
{

    int choice, item, position;
    while (1)
    {
        printf("\n<><><><> DYNAMIC STACK <><><><>");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. Display List");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("/n/t Enter the item");
            scanf("%d", &item);
            insert_node_from_end(item);
            break;
        case 2:
            delete_node_form_end();
             break;

        case 3:
            display_list();
            break;
        case 4:
            exit(0);

        default:
            printf("INVALID CHOICE");
        }
    }
    return 0;
}