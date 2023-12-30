/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Display volume & surface area of a set shape.
*/


// Boiler plate.
#include <stdio.h>

// Main Loop.
int main(){

    // Box dimensions
    float height = 10;
    float width = 2.5;
    float length = 11.5;

    /*

    [[PART A]]

    */
    // Equation: LxHxW
    float volume = height * width * length;
    printf("The volume of the box is: %f", volume);

    /*
    
    [[PART B]]
    
    */
    // Equation: 2(LxW)x2(LxH)x2(HxW)
    float sarea = 2*((length * width) + (length * height) + (height * width));
    printf("\nThe surface area of the box is: %f", sarea);

   // Ending Code
    return 0;
}