/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Display area of circle of set radius.
*/


// Boiler plate.
#include <stdio.h>

// Main Loop.
int main(){

    float radius = 4.8;
    float pi = 3.14;

    // Equation: (pi)(radius)(radius)
    float area = pi*radius*radius;

    printf("The area of the circle is: %f", area);

   // Ending Code
    return 0;
}