/*
1. Write a C program to read three Whole numbers (what we call as integers in programming language) and 
implement the algorithm, to find the largest of these three
*/

#include <stdio.h>

int largest_number(int a, int b, int c){
    int largest;
    if (a > b)
    {
        if (a > c)
            largest = a;
        else
            largest = c;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
    }

    return largest;
}

int main(){
    int a, b, c, largest;

    printf("Enter three numbers : \n");
    scanf("%d\n%d\n%d", &a, &b, &c);

    printf("Largest number is %d\n", largest_number(a, b, c));

    return 0;
}