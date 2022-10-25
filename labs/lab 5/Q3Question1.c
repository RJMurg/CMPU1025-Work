/*
Rewrite the following using a switch statement.

Author: Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){
    char marriage_status= ' ';

    switch(marriage_status){
        case 's':
        case 'S':{
            printf("Single.");
            break;
        }

        case 'm':
        case 'M':{
            printf("Married.");
            break;
        }

        case 'w':
        case 'W':{
            printf("Widowed.");
            break;
        }

        case 'e':
        case 'E':{
            printf("Engaged.");
            break;
        }

        case 'd':
        case 'D':{
            printf("Divorced.");
            break;
        }

        default:{
            printf("Error: Invalid code.");
            break;
        }
    }

    return 0;
}