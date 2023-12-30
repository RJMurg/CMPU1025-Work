/*
    Write a program that defines an integer array with 5 elements.
    Your program must do the following:
    1. Enter the 5 integer values into the array.
    2. Define another integer array with 5 elements and copy the values from the 1st array into the 2nd array in reverse order.
    (e.g., the number in the first elements of the first array will be in the last element in the second array, etc.)

    Made by: Ruán Murgatroyd
    Created: 15/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ARRAYLENGTH 5

int main()
{
    int input[ARRAYLENGTH] = {0};
    int output[ARRAYLENGTH] = {0};

    for(int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a number: ");
        scanf("%d", &input[i]);
    }

    for(int i = 0; i < ARRAYLENGTH; i++){
        output[i] = input[4 - i];
        printf("%d ", output[i]);
    }

    return 0;
} // end main