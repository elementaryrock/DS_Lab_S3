#include <stdio.h>
void main()
{
    int a[100], front = -1, rear = -1, i, size, c;
    printf("Enter the size of the queue:");
    scanf("%d", &size);
    do
    {
        printf("Choices:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            if (rear >= size - 1)
            {
                printf("Queue Overflow\n");
            }
            else
            {
                rear = rear + 1;
                printf("Enter the element to be enqueued:");
                scanf("%d", &a[rear]);
                printf("Element %d is inserted to queue\n", a[rear]);
                if (front == -1)
                {
                    front = 0;
                }
            }
            break;
        case 2:
            if (front == -1)
            {
                printf("Queue Underflow\n");
            }
            else
            {
                printf("Element %d is removed from queue\n", a[front]);
                if (front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                {
                    front = front + 1;
                }
            }
            break;
        case 3:
            if (front == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue elements are:\n");
                for (i = front; i <= rear; i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;
        case 4:
            printf("Exiting...\n");
            printf("Program ended\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (c != 4);
}