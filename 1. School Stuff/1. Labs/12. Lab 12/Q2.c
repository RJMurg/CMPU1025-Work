/*
    Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value.

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

float avg(int num1, int num2, int num3);

int main(){

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    float theaverage = 0;

    printf("Enter three numbers, pressing enter after each one:\n");
    scanf("%d%d%d", &number1, &number2, &number3);

    theaverage = avg(number1, number2, number3);

    printf("The average of %d, %d and %d is: %.3f", number1, number2, number3, theaverage);
    
    return 0;
} // end main

float avg(int num1, int num2, int num3){
    float sum = 0;
    float average = 0;

    sum = num1 + num2 + num3;

    average = sum/3;

    return average;
}