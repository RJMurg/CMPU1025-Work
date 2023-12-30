/*
    Write a program using an array that will allow the user to inpit 3 teperature readings in Farenheit.
    After all the temperatures have been read from the keyboard, display each of these temperatures on the
    screen and its corresponding temperature in Celsisus.
    Use the following formula to convern from Farenheit to Celsius: Celsius = (Farenheit - 32.0) * (5.0 / 9.0)

    Made by: Ruán Murgatroyd
    Created: 15/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ARRAYLENGTH 3

int main()
{
    float farenheit[ARRAYLENGTH] = {0};
    float celsius[ARRAYLENGTH] = {0};

    for (int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a temperature in Farenheit: ");
        scanf("%f", &farenheit[i]);
    }

    for (int i = 0; i < ARRAYLENGTH; i++){
        celsius[i] = (farenheit[i] - 32.0) * (5.0 / 9.0);
        printf("Farenheit: %.2f, Celsius: %.2f\n", farenheit[i], celsius[i]);
    }

    return 0;
} // end main