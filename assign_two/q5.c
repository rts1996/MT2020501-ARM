/*
Simple Queue
*/

#include <stdio.h>

void enqueue(int data, int** rear){
    **rear = data;
}

int dequeue(int** front){
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
            if(rear != full){
                printf("Enter value to be queued : ");
                scanf("%d", &data);
                enqueue(data, &rear);
                rear++;
            }
            else{
                printf("Queue Full\n");
            }
            break;

        case 2:
            if(front == rear){
                printf("Queue Empty\n");
            }
            else{
                printf("Dequeued value : %d\n",dequeue(&front));
                front++;
            }
            break;

        case 3:
            print(a);
            break;
        }
    }

    return 0;
}