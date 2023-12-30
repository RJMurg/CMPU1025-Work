/*
    Given an array such as
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'}
    Write a program that replaces all the blank elements in a character array with the underline character '_'.
    Use a pointer, rather than subscript to access the elements of the array.

    Author: Ruán Murgatroyd
    C. Date: 13/12/22
    IDE: VS Code
    Compiler: GCC
    OS: Windows 10
*/

#include <stdio.h>
#define SIZE 8

int main(){
    
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    char *ptr = chars;

    for(int i = 0; i < SIZE; i++){
        if(*ptr == ' '){
            *ptr = '_';
            printf("%c", *ptr);
            ptr++;
        }
        else {
            printf("%c", *ptr);
            ptr++;
        }
    }
    
    return 0;
} // end main