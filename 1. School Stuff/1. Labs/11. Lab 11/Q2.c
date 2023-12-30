/*
    Write a program that uses a function with 2 parameters (a character and an integer,
    e.g., function_name(char, int). Your function must display the character parameter a
    certain number of times on one line where this number is the integer parameter. For
    example, if your function is function_name(*,5) it will display
    *****

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

void stars(char character, int number);

int main(){

    char inputChar = 'Q';
    int inputNum = 10;

    stars(inputChar, inputNum);
    
    
    return 0;
} // end main

void stars(char character, int number){

    for(int i = 0; i < number + 1; i ++){
        printf("%c", character);
    }
}