/*
    Write a C program to implement the Fibonacci series. Your program must implement
    the following:
    1. Ask the user to enter the number of terms in the series to dispaly
    2. Display the series
    3. Should run continuously and end only when the user selects an option to end.

    Made by: Ruán Murgatroyd
    Created: 08/11/2022

    IDE: Visual Studio Code
    Compiler: GCC
    OS: Windows 10
*/

#include <stdio.h>

int main()
{   
    // Global Variables
    int endprogram = 1;

    while(endprogram == 1){
        char choice = ' ';

        printf("---==<Fibonacci Series>==---\n\nPlease select one of the following:\n1. Display the Fibonacci Series\n2. End the Program\n");
        // '%s' is used instead of '%1s' to stop the user from entering '110' and getting the first 10 digits of the sequence.
        scanf("%s", &choice);

        switch(choice){
            case '1':{
                // Local variables
                int length = 0;
                int current = 0;
                int previous = 0;
                int hold = 0;

                printf("Enter the number of terms to display the sequence.\n");
                scanf("%d", &length);
                
                // Stops the user from entering '0' or a character.
                // Also prevents the menu printing twice with 'invalid input' being printed.
                if(length == 0){
                    printf("Cannot calculate that length!\n");
                    scanf("%1s", &choice);
                    break;
                }
                // Stops the user from entering a number below 0.
                else if(length < 0){
                    printf("Cannot calculate that length!\n");
                    break;
                }

                /*
                    This loop runs for the length of the sequence.
                    It does the basic required arithmetic, plus
                    an additional 'hold' variable used to do variable swaps.

                    Since the fibonacci sequence starts with:
                    0, 1, 1,...
                    Different handling is required to process the first
                    and second terms of the sequence, done when i == 0.
                */
                for(int i = 0; i < length; i++){
                    if(i == 0){
                        printf("%d\n", current);
                        current++;
                    } // end if.
                    else{
                        hold = current + previous;
                        previous = current;
                        current = hold;
                    } // end else.
                    printf("%d\n", current);

                } // end for loop.
                break;
            } // end fibonacci case.

            case '2':{
                printf("Ending program, goodbye.");
                endprogram = 0;
                break;
            } // end program end case.

            default:{
                printf("Invalid input! Please try again.\n");
                break;
            } // end default case.

        } // end switch.
    } // end while.

    return 0;
} // end main