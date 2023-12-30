/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Calculate and display the sum of integers 1 through 5.
Calculate and idsplay the sum of floats 1.0 through 2.0.
*/

// Boiler plate.
#include <stdio.h>

// Main loop.
int main(){

    /*

    [[PART A]]

    */

    // Declaring stated variables
    int int1 = 1;
    int int2 = 2;
    int int3 = 3;
    int int4 = 4;
    int int5 = 5;

    // Adding
    int total = int1 + int2 + int3 + int4 + int5;

    // Printing Result
    printf("The total of 1 through 5 is: %d", total);

    /*
    
    [[PART B]]
    
    */

    // Declaring stated variables.
    float f1 = 1.0;
    float f2 = 1.1;
    float f3 = 1.2;
    float f4 = 1.3;
    float f5 = 1.4;
    float f6 = 1.5;
    float f7 = 1.6;
    float f8 = 1.7;
    float f9 = 1.8;
    float f10 = 1.9;
    float f11 = 2.0;

    // Adding
    float ftot = f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + f9 + f10 + f11;

    // Printing Result
    printf("\nThe total of 1.0 through 2.0 is: %f", ftot);

    // Ending Code
    return 0;
}