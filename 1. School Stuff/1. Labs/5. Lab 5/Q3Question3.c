/*
Write a program to read in two integers and
detect if the first integer is evenly divisible
by the second.

Author: Ruán Murgatroyd
C. Date: 25/10/22
*/
#include <stdio.h>

int main(){
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    if(n1 % n2 == 0){
        printf("n1 is evenly divisible by %d", n2);
    }
    else{
        printf("n1 is not evenly divisible by %d", n2);
    }

    return 0;
}