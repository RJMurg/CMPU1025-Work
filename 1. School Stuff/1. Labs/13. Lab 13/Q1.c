/*
    Pass by Reference, Write a program that uses 2 functions (1 function to calculate the area of a Square,
    another functon to calculate the area of a Circle.)
    Declare a variable in your main for the length of a side of the square and another for the circle's radius.
    Ask the user to enter these values. Using pass-by-reference, pass these as parameters to the separate functions,
    calculate the areas of the Square and Circle in their separate functions, and display the calculated areas for the
    square and circle back in your main(). Remember, you must use Pass by Reference. DO not forget to declare 2 prototypes
    for your 2 functions.

    Made by: Ruán Murgatroyd
    Created: 14/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <stdlib.h>

float sqArea(float *length);
float ciArea(float *radius);

int main(){

    float length = 0;
    float radius = 0;

    printf("Enter the Length of your square in cm: ");
    scanf("%f", &length);

    printf("Now enter the Radius of your circle in cm: ");
    scanf("%f", &radius);

    printf("The area of your square is %.2fcm^2.\n", sqArea(&length));
    printf("The area of your circle is %.2fcm^2.", ciArea(&radius));
    
    return 0;
} // end main

float sqArea(float *length){
    float area = 0;

    area = (*length) * (*length);

    return area;
}

float ciArea(float *radius){
    float PI = 3.14;
    float sqRad = 0;
    float area = 0;

    sqRad = (*radius) * (*radius);

    area = PI * sqRad;

    return area;
}