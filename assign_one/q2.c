/*
2. Write a C Program to read the 15 whole numbers into an array implement the algo to find the largest 
in the array
*/
#include <stdio.h>

int largest_number (int a[15]){
    int largest = a[0];
    for(int i = 1; i < 15; i++){
        if(a[i] > largest)
            largest = a[i];
    }
    return largest;
}

int main(){

    int a[15];
    printf("Enter 15 integers : \n");
    for (int i = 0; i < 15; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Largest number is : %d\n", largest_number(a));

    return 0;
}