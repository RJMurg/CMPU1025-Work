/*
    Write a program that uses a function to find the highest number of 5
    numbers in an array. In your main, you must ask the user to enter 5
    numbers and store them into an array. Then pass the array to a function
    and your function must find the highest number in that array, and return it.

    Made by: Ruán Murgatroyd
    Created: 14/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int findHighest(int []);

int main(){

    int array[SIZE];
    
    printf("Enter 5 numbers, pressing enter inbetween:\n");

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }

    printf("The highest value is %d", findHighest(array));
    
    return 0;
} // end main

int findHighest(int anArray[]){
    int highest = 0;

    for(int i = 0; i < SIZE; i++){
        if(i == 0){
            highest = anArray[i];
        }
        else if(anArray[i] > anArray[i - 1]){
            highest = anArray[i];
        }
    }

    return highest;
}