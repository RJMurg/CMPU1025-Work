/*
Write a program that asks the user to enter an integer between 1 and 100.
Check whether the integer is even or odd and print a message on the screen
stating "Number x is Even" or "Number y is Odd".

Author: Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){
    int input = 0;

    printf("Enter an integer between 1 and 100:");
    scanf("%d", &input);

    if(input % 2 == 0){
        printf("Number %d is Even", input);
    }
    else{
        printf("Number %d is Odd", input);
    }
    
    return 0;
}
