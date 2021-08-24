/*

4. Write a C program to read 20 whole numbers and sort then in ascending order and print the contents
of the array.

*/

#include <stdio.h>

void ascending(int a[20])
{
    int temp = 0;
    for (int i = 0; i < 19; i++)
    {
        for(int j = i + 1; j < 20; j++){
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{

    int a[20];
    int i;
    printf("Enter 20 integers : \n");
    for (i = 0; i < 20; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    ascending(a);

    printf("\n Array in ascending order : \n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}