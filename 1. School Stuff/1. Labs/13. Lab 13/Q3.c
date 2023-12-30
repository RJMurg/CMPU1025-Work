/*
    Write a progrma that uses a function to calculate
    the average of 5 numbers in an array. In main, have
    the user enter 5 numbers and store them into an array.
    Pass that array into a function and calculate the average
    those 5 numbers, returning this to your main to be displayed.

    Made by: Ruán Murgatroyd
    Created: 14/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 5

float avgArray(int[]);

int main(){

    int array[SIZE] = {0};

    printf("Enter 5 numbers, pressing ENTER in-between.\n");

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }

    printf("The average of the array is: %.2f", avgArray(array));
    
    return 0;
} // end main

float avgArray(int anArray[]){
    float average = 0;
    float sum = 0;
    
    for(int i = 0; i < SIZE; i++){
        sum = sum + anArray[i];
    }

    average = (sum/5.0);

    return average;
}