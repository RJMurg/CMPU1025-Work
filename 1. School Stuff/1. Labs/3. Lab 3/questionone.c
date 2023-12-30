#include <stdio.h>

int main(){
    int inpa = 0;
    int inpb = 0;
    int inpc = 0;

    printf("Please enter your first number: ");
    scanf("%d", &inpa);

    printf("\nPlease enter your second number: ");
    scanf("%d", &inpb);

    printf("\nPlease enter your final number: ");
    scanf("%d", &inpc);

    printf("\nYou have entered:\n%d\n%d\n%d", inpa, inpb, inpc);


    return 0;
}