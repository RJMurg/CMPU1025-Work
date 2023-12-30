/*
In a triangle, the sum of any two sides must be greated than the third side.
Write a program to input three numbers and determine if the form a valid triangle.

Author: Ruán Murgatroyd
C. Date: 22/10/22
*/
#include <stdio.h>

int main(){
    int side1, side2, side3;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1 + side2 > side3){
        printf("Valid triangle.");
    }
    else if(side2 + side3 > side1){
        printf("Valid triangle.");
    }
    else if(side3 + side1 > side2){
        printf("Valid triangle.");
    }
    else{
        printf("Invalid triangle.");
    }
    return 0;
}