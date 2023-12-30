/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Print modular operations.
*/


// Boiler plate.
#include <stdio.h>

// Main Loop.
int main(){

    int m1 = 2 % 2;
    int m2 = 3 % 2;
    int m3 = 5 % 2;
    int m4 = 7 % 3;
    int m5 = 100 % 33;
    int m6 = 100 % 7;

    printf("2 %% 2 is:\n%d.\n", m1);
    printf("3 %% 2 is:\n%d.\n", m2);
    printf("5 %% 2 is:\n%d.\n", m3);
    printf("7 %% 3 is:\n%d.\n", m4);
    printf("100 %% 33 is:\n%d.\n", m5);
    printf("100 %% 7 is:\n%d.\n", m6);
   // Ending Code
    return 0;
}