#include <stdio.h>

int main(){
    float var1, var2, var3, sum, avg = 0;

    printf("Enter three floats, please:\n");
    scanf("%f %f %f", &var1, &var2, &var3);

    sum = var1 + var2 + var3;
    printf("The sum of %f, %f, and %f is: %f", var1, var2, var3, sum);

    avg = (var1 + var2 + var3)/3;
    printf("The average of %f, %f, and %f is: %f", var1, var2, var3, avg);

    return 0;
}