/*
    Given the following arrays:
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    flaot miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5]l // miles per litre

    Write a program to calculate and display the value of each element of mpl. Use pointers, rather than subscripts to access the elements of each array.

    Author: Ruán Murgatroyd
    C. Date: 13/12/22
    IDE: VS Code
    Compiler: GCC
    OS: Windows 10
*/

#include <stdio.h>
#define SIZE 5

int main(){
    
    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[SIZE]; // miles per litre

    for(int i = 0; i < SIZE; i ++){
        *(mpl + i) = (*(miles + i) / *(litres + i));
        printf("%d ", *(mpl + i));
    }
    
    return 0;
} // end main