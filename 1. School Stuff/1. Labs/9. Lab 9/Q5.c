/*
    Using pointer notation, write data to an array with three elements.
    Then, still using pointer notation, copy the data to a second three-element array.

    Made by: Ruán Murgatroyd
    Created: 06/12/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 3

int main(){

    int Array1[SIZE];
    int Array2[SIZE];

    for(int i = 0; i < SIZE; i++){
        printf("Enter a whole number: ");
        scanf("%d", &*(Array1 + i));
        printf("You entered %d into Array1[%d].\n", *(Array1 + i), i);
    }

    printf("You entered: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d, ", *(Array1 + i));
    }

    printf("\nCopying Array1 to Array2.\n");
    for(int i = 0; i < SIZE; i++){
        *(Array2 + i) = *(Array1 + i);
        printf("%d copied into Array2[%d]\n", *(Array2 + i), i);
    }

    printf("\nCopy complete.");

    return 0;
} // end main