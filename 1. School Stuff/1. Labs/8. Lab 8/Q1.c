/*
    Show how to initialise two 3x4 arrays when they are declared.
    In your program, declare a third 3x4 array.
    Multiply each corresponding element of the first two arrays,
    and store the result in the third array.

    E.g. Array3[0][0] = Array1[0][0] x Array2[0][0]

    Made by: Ruán Murgatroyd
    Created: 29/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 3
#define COLS 4

int main()
{
    int array1[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int array2[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int array3[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }

    return 0;
} // end main