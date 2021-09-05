/*
Full Ascending Stack
*/

#include <stdio.h>

void push(int data, int *sp)
{
    *sp = data;
}

int pop(int *sp)
{
    int data = *sp;
    *sp = 0;
    return data;
}

void print(int a[5])
{
    printf("\nStack\n%d\n%d\n%d\n%d\n%d\n", a[4], a[3], a[2], a[1], a[0]);
}

int main()
{
    int a[5] = {0, 0, 0, 0, 0};
    int *sp = a;
    sp--;
    int *empty = sp;
    int option = 0;
    int data;
    while (option != 4)
    {
        printf("\n\n--------MENU--------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("Enter option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            if (sp != &a[4])
            {
                printf("Enter value to push : ");
                scanf("%d", &data);
                sp++;
                push(data, sp);
            }
            else
            {
                printf("stack full\n");
            }
            break;

        case 2:
            if (sp == empty)
            {
                printf("Empty Stack");
            }
            else
            {
                printf("Popped data : %d\n", pop(sp));
                sp--;
            }
            break;

        case 3:
            print(a);
            break;
        }
    }

    return 0;
}