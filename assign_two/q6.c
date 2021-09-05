/*
Circular Queue
*/

#include <stdio.h>

void enqueue(int data, int **rear)
{
    **rear = data;
}

int dequeue(int **front)
{
    int data = **front;
    **front = 0;
    return data;
}

void print(int a[5])
{
    printf("\nQueue\n%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
}

int main()
{
    int a[5] = {0, 0, 0, 0, 0};
    int *front;
    int *rear;
    int *full;
    int empty = 1;

    front = a;
    rear = a;
    full = &a[4];
    full++;

    int option = 0;
    int data;
    while (option != 4)
    {
        printf("\n\n--------MENU--------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("Enter option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            if (front != rear || empty == 1){
                empty = 0;
                printf("Enter value to be queued : ");
                scanf("%d", &data);
                enqueue(data, &rear);
                if(rear == &a[4]){
                    rear = a;
                }
                else{
                    rear++;
                }
            }
            else if(front == rear)
            {
                printf("Queue Full\n");
            }
            break;

        case 2:
            if (empty == 1)
            {
                printf("Queue Empty\n");
            }
            else
            {
                printf("Dequeued value : %d\n", dequeue(&front));
                if (front == &a[4])
                {
                    front = a;
                }
                else {
                    front++;
                }
                if(front == rear){
                    empty = 1;
                }
            }
            break;

        case 3:
            print(a);
            break;
        }
    }

    return 0;
}