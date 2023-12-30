/*
    Write a program that uses a 3x2 array which does the following:
    1. Enters in values for each element in the array.
    2. Calculate and display the sum of row 0, row 1 and row 2 separately.
    3. Calculate and display the sum of column 0 and column 1 separately.
    4. Find the highest number in the array and display it.

    Made by: Ruán Murgatroyd
    Created: 29/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 3
#define COLS 2

int main()
{
    int array[ROWS][COLS] = {0};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &array[i][j]);
        }
    }

    int rowSum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            rowSum += array[i][j];
        }
        printf("Sum of row %d = %d\n", i, rowSum);
        rowSum = 0;
    }

    int colSum = 0;

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            colSum += array[j][i];
        }
        printf("Sum of column %d = %d\n", i, colSum);
        colSum = 0;
    }

    int highest = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (array[i][j] > highest)
            {
                highest = array[i][j];
            }
        }
    }

    printf("Highest number = %d", highest);

    return 0;
} // end main