#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return (new_node);
}
struct node *insert_node(struct node *r_node, int item)
{
    if (r_node == NULL)
    {
        return newNode(item);
    }
    if (item < r_node->data)
    {
        r_node->left = insert_node(r_node->left, item);
        printf("/n LEFT NODE INSERTED SUCESSFULLY:");
    }
    if (item > r_node->data)
    {
        r_node->right = insert_node(r_node->right, item);
        printf("\n RIGHT NODE INSERTED SUCCESSFULLY");
    }
    return r_node;
}
void inorder_Traversal(struct node *r_node)
{
    if (r_node != NULL)
    {
        inorder_Traversal(r_node->left);
        printf("%d->", r_node->data);
        inorder_Traversal(r_node->right);
    }
}

void preorder_traversal(struct node *r_node)
{
    if (r_node != NULL)
    {
        printf(" % d-> ", r_node->data);
        preorder_traversal(r_node->left);
        preorder_traversal(r_node->right);
    }
}
void postorder_traversal(struct node *r_node)
{
    if (r_node != NULL)
    {
        postorder_traversal(r_node->left);
        postorder_traversal(r_node->right);
        printf("%d->", r_node->data);
    }
}
int main()
{
    int choice, item;
    struct node *root = NULL;
    while (1)
    {
        printf("\n **************************");
        printf("\n\t MENU FOR BINARY SEARCH TREE ");
        printf("\n\t  1. Insert Node.");
        printf("\n\t  2. In-Order Traversal of Tree.");
        printf("\n\t  3. Pre-Order traversal of tree..");
        printf("\n\t  4. Post Order Traveral Of The Binary Search Tree...");
        printf("\n\t  5. Exit the Program!");
        printf("\n\t **************************");
        printf("\n\tenter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter data to be inserted:");
            scanf("%d", &item);
            root = insert_node(root, item);
            break;
        case 2:
            inorder_Traversal(root);
            break;
        case 3:
            preorder_traversal(root);
            break;
        case 4:

            postorder_traversal(root);
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
