/*
    Testing entry of 2D arrays.
    This is my attempt to try and make 2D array entry by a user easy.

    Made by: Ruán Murgatroyd
    Created: 16/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
    int TDArray[ROWS][COLS] = {0};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter a number into TDArray[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &TDArray[i][j]);
        }
    }

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            printf("| %d ", TDArray[i][j]);
        }

        printf("|\n--------------\n");
    }

    return 0;
} // end main