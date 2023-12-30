/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Calculate and print the volume of a cube.
*/


// Boiler plate.
#include <stdio.h>

// Main Loop.
int main(){

    float length = 2.8;

    // Equation: LxLxL
    float volume = length * length * length;

    printf("The volume of the cube is: %f", volume);

   // Ending Code
    return 0;
}