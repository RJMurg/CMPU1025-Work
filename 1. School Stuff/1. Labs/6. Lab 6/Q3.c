/*
    Define an integer array with 4 elements.
    Write a program that will allow the user to enter 4 numbers into this array and do the following:
    1. Display the contents of the array to the screen in the same order they were entered.
    2. Swap the 1st and 2nd numbers in the array, and swap the 3rd and 4th numbers in the array.
    3. Display the numbers on the screen using this new order.

    Made by: Ruán Murgatroyd
    Created: 15/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ARRAYLENGTH 3

int main()
{
    
    int input[ARRAYLENGTH] = {0};
    int output[ARRAYLENGTH] = {0};

    for(int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a number: ");
        scanf("%d", &input[i]);
    }

    output[0] = input[1];
    output[1] = input[0];
    output[2] = input[3];
    output[3] = input[2];

    for(int i = 0; i < ARRAYLENGTH; i++){
        printf("%d ", output[i]);
    }

    return 0;
} // end main