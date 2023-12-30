#include <stdio.h>

int main(){
    float inpa = 0.0;
    float inpb = 0.0;
    float inpc = 0.0;

    printf("Please enter your first float: ");
    scanf("%f", &inpa);

    printf("Please enter your second float: ");
    scanf("%f", &inpb);

    printf("Please enter your third float: ");
    scanf("%f", &inpc);

    printf("You entered:\n%.4f\n%.3f\n%.0f", inpa, inpb, inpc);

    return 0;
}