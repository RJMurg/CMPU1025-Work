/*
    Write a program using an array to read in 15 numbers and display them as such:
    1. Each number is displayed on a separate line.
    2. Each number is displayed on the same line, with one space between them.
    3. The same as 2, but display in reverse order to how they were input.

    Made by: Ruán Murgatroyd
    Created: 22/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 15

int main()
{
    int arr[SIZE] = {0};

    // Input
    for(int i = 0; i < SIZE; i++){
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    // 1. Each number is displayed on a separate line.
    for(int i = 0; i < SIZE; i++){
        printf("%d\n", arr[i]);
    }

    printf("\n");

    // 2. Each number is displayed on the same line, with one space between them.
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    // 3. The same as 2, but display in reverse order to how they were input.
    for(int i = SIZE - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
} // end main