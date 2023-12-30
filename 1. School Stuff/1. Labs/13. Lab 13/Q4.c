/*
    Make a copy of Q2, this time change the contents of the array
    by multiplying all elements by 2. When this is done, print the
    contents of your array in your main() and see if those changes
    can be seen.

    Made by: Ruán Murgatroyd
    Created: 14/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 5

void changer(int []);

int main(){

    int array[SIZE] = {0};

    printf("Enter 5 numbers, pressing ENTER in-between.\n");

    for(int i = 0; i < SIZE; i++){
        scanf("%d", &array[i]);
    }

    printf("The array as it stands: ");

    for(int i = 0; i < SIZE; i ++){
        printf("%d ", array[i]);
    }

    printf("\nCalling changer()");

    changer(array);

    printf("\nchanger() done, array now: ");

    for(int i = 0; i < SIZE; i ++){
        printf("%d ", array[i]);
    }
    
    return 0;
} // end main

void changer(int anArray[]){
    
    for(int i = 0; i < SIZE; i++){
        anArray[i] = anArray[i] * 2;
    }
}