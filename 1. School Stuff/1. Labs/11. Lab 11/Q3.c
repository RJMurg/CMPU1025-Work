/*
    Write a program that uses a function to find the highest and lowest number of 3
    values. These 3 values must be passed as parameters to the function, i.e.,
    function_name(int, int, int). Your function should find these values and display
    messages stating:
    The Highest value is x
    The Lowest value is y

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

void highLow(int num1, int num2, int num3);

int main(){

    highLow(2, 12, 6);

    return 0;
} // end main

void highLow(int num1, int num2, int num3){
    int highest = 0;
    int lowest = 0;

    if(num1 > num2){
        if(num1 > num3){
            highest = num1;
        }
        else{
            highest = num3;
        }
    }
    else if(num2 > num1){
        if(num2 > num3){
            highest = num2;
        }
        else{
            highest = num3;
        }
    }
    else if(num3 > num1){
        if(num3 > num2){
            highest = num3;
        }
        else{
            highest = num2;
        }
    }

    if(num1 < num2){
        if(num1 < num3){
            lowest = num1;
        }
        else{
            lowest = num3;
        }
    }
    else if(num2 < num1){
        if(num2 < num3){
            lowest = num2;
        }
        else{
            lowest = num3;
        }
    }
    else if(num3 < num1){
        if(num3 < num2){
            lowest = num3;
        }
        else{
            lowest = num2;
        }
    }

    printf("The highest value is: %d\nThe lowest value is: %d", highest, lowest);
}