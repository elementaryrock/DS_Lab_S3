#include <stdio.h>
void main()
{
    int a[100], top = -1, i, size, c;
    printf("Enter the size of the stack:");
    scanf("%d", &size);
    do
    {
        printf("Choices:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            if (top >= size - 1)
            {
                printf("Stack Overflow\n");
            }
            else
            {
                top = top + 1;
                printf("Enter the element to be pushed:");
                scanf("%d", &a[top]);
                printf("Element %d pushed to stack\n", a[top]);
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Stack Underflow\n");
            }
            else
            {
                printf("Element %d popped from stack\n", a[top]);
                top = top - 1;
            }
            break;
        case 3:
            if (top == -1)
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack elements are:\n");
                for (i = top; i >= 0; i--)
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