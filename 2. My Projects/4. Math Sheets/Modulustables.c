/*
    This program prints out the modulus tables for a modulus base up to 20.
    It can do addition and multiplication tables.

    Made by: Ruán Murgatroyd
    Created: 16/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

void multiplicationtable(int base){

    // Prints the top row of the table.
    printf("mod(%d)   |", base);
    for(int i = 0; i < base; i++){
        printf("  %d  |", i);
    }

    printf("\n"); // Linebreak for horizontal bar.

    printf("----------");

    for(int i = 0; i < base; i++){
        printf("------", i);
    }

    printf("\n"); // Linebreak for horizontal bar.

    // Begins printing the other rows.
    for(int i = 0; i < base; i++){
        printf("%d        |", i);

        for(int j = 0; j < base; j++){
            printf("  %d  |", (i * j) % base);
        }

        printf("\n");

    }
}

int main()
{
    int modulusBase = 0;

    printf("Enter a modulus base: ");
    scanf("%d", &modulusBase);

    multiplicationtable(modulusBase);

    return 0;
} // end main
