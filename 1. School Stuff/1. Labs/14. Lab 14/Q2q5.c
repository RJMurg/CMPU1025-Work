/*
    What is the output from the following program segments

    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

int main(){

    // Part (a)
    char *p = "abcd";
    while(*p){
        putchar(*p++);
    }

    // Output: abcd

    printf("\n");

    // Part (b)
    char *text = "abcd";
    p = text;

    p += strlen(p) - 1;
    while(text <= p){
        puts(p--);
    }

    // Output:
    // d
    // cd
    // bcd
    // abcd
    
    return 0;
} // end main