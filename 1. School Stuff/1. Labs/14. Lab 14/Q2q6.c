/*
    Write a program to read in your name and display it with a space between each letter.
    For example John gets displayed as "J o h n"

    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(){

    char name[SIZE];

    printf("Enter your name: ");
    fgets(name, SIZE, stdin);

    for(int i = 0; i < strlen(name); i++){
        printf("%c ", name[i]);
    }
    
    return 0;
} // end main