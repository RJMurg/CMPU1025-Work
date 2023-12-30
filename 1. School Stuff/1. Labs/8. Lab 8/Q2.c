/*
    Complete the following so it computes the sum of all the elements in the array.

    Made by: Ruán Murgatroyd
    Created: 29/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 4
#define COLS 6

int main()
{
    int data[ROWS][COLS] = { {3, 2, 5, 7, 4, 2},
                             {1, 4, 4, 8, 13, 1},
                             {9, 1, 0, 2, 0, 0},
                             {0, 2, 6, 3, -1, -8} };

    int sum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += data[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
} // end main