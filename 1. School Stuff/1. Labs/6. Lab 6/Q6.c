/*
    Write a program to enter numbers into an integer array with 3 elements.
    Your program must sort the array in ascending order.

    Made by: Ruán Murgatroyd
    Created: 15/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define ARRAYLENGTH 10

int main()
{
    int presort[ARRAYLENGTH] = {0};
    int holdsort[ARRAYLENGTH] = {0};
    int complete = 0;

    for(int i = 0; i < ARRAYLENGTH; i++){
        printf("Enter a digit: ");
        scanf("%d", &presort[i]);
    }

    for(int i = 0; i < ARRAYLENGTH; i++){
            holdsort[i] = presort[i];
            // printf("Presort '%d' is becoming Holdsort '%d'\n", presort[i], holdsort[i]);
    }

    while(complete == 0){
        int parsing = 0;

        // printf("Entering sort loop.\n");
        for(int i = 0; i < (ARRAYLENGTH - 1); i++){
            // printf("Holdsort[%d] = %d | Holdsort[%d] = %d.\n", i, holdsort[i], i + 1, holdsort[i + 1]);
            if(holdsort[i] > holdsort[i + 1]){
                int hold = holdsort[i];

                holdsort[i] = holdsort[i + 1];
                holdsort[i + 1] = hold;
                // printf("Holdsort one ahead was smaller than current. New ordered arrangement: %d, %d\n", holdsort[i], holdsort[i + 1]);
            }
        }

        printf("Entering parse loop.\n");
        for(int i = 0; i < (ARRAYLENGTH - 1); i++){
            if(holdsort[i] <= holdsort[i + 1]){
                parsing++;
                // printf("Holdsort is same or smaller than one ahead. Continuing. %d/%d.\n", parsing, ARRAYLENGTH);
            }

            if(parsing == (ARRAYLENGTH - 1)){
                // printf("Parse complete. They are sorted.\n");
                complete = 1;
            }
        }

    }

    if(complete == 1){
        printf("Your sorted digits are: ");
        for(int i = 0; i < ARRAYLENGTH; i++){
            printf("%d, ", holdsort[i]);
        }
    }

    return 0;
} // end main