/*
    Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result.

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

int isEven(int num);

int main(){
    int checkNum = 0;

    printf("Enter a whole number: ");
    scanf("%d", &checkNum);

    if(isEven(checkNum) == 1){
        printf("%d is even!", checkNum);
    }
    else{
        printf("%d is odd!", checkNum);
    }
    
    return 0;
} // end main

int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}