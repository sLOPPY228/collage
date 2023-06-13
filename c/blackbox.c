void enqueue()
{
    int x;
    printf("Enter the value to be inserted : ");
    scanf("%d", &x);
    if ((front == -1 && rear == -1) || (front == rear && rear == size - 1))
    {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    arr[rear] = x;
    printf("Inserted Successfully\n");
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == size - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }
    printf("Deleted Successfully\n");
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        printf("Front : %d\n", arr[front]);
        printf("Rear : %d\n", arr[rear]);
    }
    else if (front == size - 1)
    {
        printf("Front : %d\n", arr[front]);
        printf("Rear : %d\n", arr[rear]);
    }
    else
    {
        printf("Front : %d\n", arr[front]);
        printf("Rear : %d\n", arr[rear]);
    }
}