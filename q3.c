/*

3. Write a C program to read 20 whole numbers into an array and count the number of even numbers 
in the array

*/
#include <stdio.h>

int even(int a[20])
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        if (a[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{

    int a[20];
    printf("Enter 20 integers : \n");
    for (int i = 0; i < 20; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Count of even numbers  : %d\n", even(a));

    return 0;
}