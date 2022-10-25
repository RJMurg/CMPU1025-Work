/*
Write a program to input a number 1 to 7 from the keyboard,
where 1 represents Sunday, 2 Monday, 3 Tuesday, etc. Display
the day of the week corresponding to the number typed by the
user. If the user types a number outside the range 1 to 7,
display an error message.

Author: Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){

    int input = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    switch(input){
        case 1:{
            printf("Sunday");
            break;
        }

        case 2:{
            printf("Monday");
            break;
        }

        case 3:{
            printf("Tuesday");
            break;
        }

        case 4:{
            printf("Wednesday");
            break;
        }

        case 5:{
            printf("Thursday");
            break;
        }

        case 6:{
            printf("Friday");
            break;
        }

        case 7:{
            printf("Saturday");
            break;
        }

        default:{
            printf("Error");
            break;
        }
    }
    return 0;
}