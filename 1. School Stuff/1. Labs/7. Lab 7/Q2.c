/*
    Write a program that uses a 3x2 array. Your program must do the following:
    1. Enter the values into the array.
    2. Display the values in the array.
    3. Find the largest and smallest values in the array and display them.
    4. Find the average of the values in the array and display it.

    Made by: Ruán Murgatroyd
    Created: 22/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ROWS 3
#define COLS 2

int main()
{
    int arr[ROWS][COLS];

    // 1. Enter the values into the array.
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("Enter a value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // 2. Display the values in the array.
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 3. Find the largest and smallest values in the array and display them.
    int largest = arr[0][0];
    int smallest = arr[0][0];

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            if(arr[i][j] > largest){
                largest = arr[i][j];
            }
            else if(arr[i][j] < smallest){
                smallest = arr[i][j];
            }
        }
    }

    printf("The largest number is: %d, and the smallest number is: %d", largest, smallest);

    // 4. Find the average values in the array and display it.
    int averagetemp = 0;
    float average = 0.0;

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            averagetemp = averagetemp + arr[i][j];
        }
    }

    average = (averagetemp / (ROWS + COLS));
    printf("\nThe average of all values in the array is: %.2f", average);

    return 0;
} // end main