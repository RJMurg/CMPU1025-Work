/*
    Show what the print statements display.

    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>


int main(){

    printf("%5s", "abcd");
    printf("\n");
    printf("%5s", "abcdef");
    printf("\n");
    printf("%-5s", "abc");
    printf("\n");
    printf("%5.2s", "abcde");
    printf("\n");
    printf("%-5.2s", "abcde");
    
    return 0;
} // end main