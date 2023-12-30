/*
    Pass an array to a function and check if the values are even
    or odd. Display them in the function then return the
    amount of even numbers which is then displayed in main.

    Made by: Ruán Murgatroyd
    Created: 14/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 5

int isEven(int []);

int main(){

    int array[SIZE] = {0};

    printf("Enter 5 numbers, pressing ENTER in-between.\n");

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }

    int numOfEven = isEven(array);

    printf("There are %d even numbers in the array.", numOfEven);
    
    return 0;
} // end main

int isEven(int anArray[]){
    int even = 0;

    for(int i = 0; i < SIZE; i++){
        if(anArray[i] % 2 == 0){
            even++;

            printf("%d is even.\n", anArray[i]);
        }
    }

    return even;
}