#include <stdio.h>

int main(){
    float celsius = 0;
    float farenheit = 0;

    printf("Enter a temperature in degrees Farenheit: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32.0)*(5.0 / 9.0);

    printf("%.4f degrees Farenheit is %.4f degrees Celsius", farenheit, celsius);

    return 0;
}