// cprogram for linked list.
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

void insert_node_from_begin(int item)
{
    allocate_memory(item);
    if (head == NULL)
    {
        new_node->next = NULL;
    }
    else
    {
        new_node->next = head;
    }
    head = new_node;
    printf("node inserted at begin");
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
void insert_node_before_xth_position(int item, int pos)
{
    int l = list_length();
    if (l == 0)
    {
        printf("\n\tList id empty");
    }
    if ((pos <= l) && (pos >= 1))
    {
        if (pos == 1)
        {
            insert_node_from_begin(item);
        }
        else
        {
            current_node = head;
            for (int i = 1; i < pos - 1; i++)
            {
                current_node = current_node->next;
            }
            temp_node = current_node->next;
            allocate_memory(item);
            current_node->next = new_node;
            new_node->next = temp_node;
            printf("\n\tnode inserted before %d position", pos);
        }
    }
    else
    {
        printf("\n\tposition is not available");
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

int main()
{

    int choice, item, position;
    while (1)
    {
        printf("\n<><><><> LINKED LIST <><><><>");
        printf("\n1. Insert Node at begin");
        printf("\n2. Insert Node at end");
        printf("\n3Insert node before Xth position");
        printf("\n4Insert node after Xth position");
        printf("\n5. Display List");
        printf("\n6. Delete Node");
        printf("\n7. Exit");
        printf("\nEnter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter item : ");
            scanf("%d", &item);
            insert_node_from_begin(item);
            break;
        case 2:
            printf("/n/t Enter the item");
            scanf("%d", &item);
            insert_node_from_end(item);
            break;

        case 3:
            printf("\n\tEnter the item:");
            scanf("%d", &item);
            printf("\n\tEnter position:");
            scanf("%d", &position);
            insert_node_before_xth_position(item, position);

        case 5:
            display_list();
            break;
        case 7:
            exit(0);

        default:
            printf("choice milena mula >.<");
        }
    }
    return 0;
}
