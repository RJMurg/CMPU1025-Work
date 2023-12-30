/*
    Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen.

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

int sum(int num1, int num2, int num3);
void average(int sum);

int main(){

    sum(2, 4, 4);
    
    return 0;
} // end main

int sum(int num1, int num2, int num3){
    int sum = 0;

    sum = num1 + num2 + num3;

    average(sum);
}

void average(int sum){
    int avg = 0;

    avg = (sum)/3;

    printf("The average is: %d", avg);
}