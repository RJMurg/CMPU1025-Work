/*
    Write a program that uses a char array with 5 elements.
    Enter any 5 characters of your choice into the array.
    Output the contents ofthe array to the screen and display each character.

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
    char input[ARRAYLENGTH] = {0};

    for (int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a character: ");
        scanf("%1s", &input[i]);
    }

    for (int i = 0; i < ARRAYLENGTH; i++){
        printf("%c", input[i]);
    }

    return 0;
} // end main