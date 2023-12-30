/*
Using a switch statement, write a program that asks the user to enter a character from the
keyboard and displays a message when the character is a vowel (a, e, i, o, u) or not.

A : Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){
    char input = ' ';

    printf("Please enter a single character.\n");
    scanf("%1s", &input);

    switch(input){

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':{
            printf("%c is a vowel.", input);
            break;
        }

        default:{
            printf("%c is not a vowel.", input);
            break;
        }
    }

    return 0;
}