/*
    Write a program to input numbers to two one-dimensional arrays,
    each having five elements.
    The program must display the result of multiplying the arrays together.

    Made by: Ruán Murgatroyd
    Created: 22/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr1[SIZE] = {0};
    int arr2[SIZE] = {0};

    // Input
    for(int i = 0; i < SIZE; i++){
        printf("Enter a number for arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < SIZE; i++){
        printf("Enter a number for arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // Multiply
    int arr3[SIZE] = {0};

    for(int i = 0; i < SIZE; i++){
        arr3[i] = arr1[i] * arr2[i];
    }

    // Output
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr3[i]);
    }

    return 0;
} // end main