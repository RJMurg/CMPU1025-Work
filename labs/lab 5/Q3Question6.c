/*
Write a program that reads a single numeral from the keyboard
and displays its value as a word. For example, an input of
5 will display the word 'five'.

Author: Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){
    int input = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    switch(input){

        case 0:{
            printf("Zero");
            break;
        }

        case 1:{
            printf("One");
            break;
        }

        case 2:{
            printf("Two");
            break;
        }

        case 3:{
            printf("Three");
            break;
        }

        case 4:{
            printf("Four");
            break;
        }

        case 5:{
            printf("Five");
            break;
        }

        case 6:{
            printf("Six");
            break;
        }

        case 7:{
            printf("Seven");
            break;
        }

        case 8:{
            printf("Eight");
            break;
        }

        case 9:{
            printf("Nine");
            break;
        }

        default:{
            printf("Number out of range.");
            break;
        }
    }

    return 0;
}