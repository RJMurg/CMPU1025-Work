/*
    Write a program to input vales to a 4x5 array,
    search the array for values that are less than 0 and display
    these values along with the row and column number.

    Made by: Ruán Murgatroyd
    Created: 22/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 4
#define COLS 5

int main()
{
    int arr[ROWS][COLS] = {0};

    // Input
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("Enter a value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Search
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            if(arr[i][j] < 0){
                printf("The value %d is in row %d and column %d\n", arr[i][j], i, j);
            }
        }
    }

    return 0;
} // end main