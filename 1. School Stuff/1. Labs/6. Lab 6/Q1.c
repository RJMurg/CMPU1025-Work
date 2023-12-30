/*
    Write a program that uses an array to enter 5 integer numbers.
    Copy the contents of this array into another array using only a loop

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

    for (int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a number: ");
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < ARRAYLENGTH; i++){
        output[i] = input[i];
        printf("%d", output[i]);
    }

    return 0;
} // end main