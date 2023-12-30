/*
Author: Ruán Murgatroyd
C. Date: 11/10/22

Calculate and print simple mathematical operations.
*/


// Boiler plate.
#include <stdio.h>

// Main Loop.
int main(){

    int ans1 = 15 + 10;
    int ans2 = 15 - 10;
    int ans3 = 15 * 10;
    float ans4 = (float) 15 / (float) 10;
    int ans5 = 15 % 3;

    printf("15 + 10 is: %d\n", ans1);
    printf("15 - 10 is: %d\n", ans2);
    printf("15 * 10 is: %d\n", ans3);
    printf("15 / 10 is: %f\n", ans4);
    printf("15 %% 3 is: %d\n", ans5);


   // Ending Code
    return 0;
}