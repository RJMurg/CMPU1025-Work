/*
    Developing a C program to enable bank customers to manage their PIN on an ATM.
    Assume the default PIN is '1234'.
    The program should use menus to do the following:
    1. Enter PIN & verify it is correct
    2. Change PIN
    3. Display the (un)successful attempts to enter the PIN
    4. Exit the program

    Author: Ruán Murgatroyd
    C. Date: 01/11/22
    IDE: VS Code
    Compiler: GCC
    OS: Windows 10
*/
#include <stdio.h>


int main(){
    // Some variables are placed here as doing things such as setting correct & incorrect inputs to '0' every loop would incorrectly report data to the user.
    int ended = 0;
    int PIN = 1234; // Default PIN
    int correctInputs = 0;
    int incorrectInputs = 0;

    // Main menu
    while(ended == 0){
        // Variables needed throughout the program
        char menuChoice = 0;

        // Menu display.
        printf("<[Automated Teller Machine]>");
        printf("\nMake a selection:\n(1) Enter PIN\n(2) Change PIN\n(3) Display (un)successful attempts\n(4) Exit\n");
        scanf("%1s", &menuChoice);

        // Checking
        switch(menuChoice){
            // Enter PIN
            case '1':{
                int userPIN = 0;

                printf("Enter your PIN: ");
                scanf("%d", &userPIN);
                if(userPIN == PIN){
                    printf("PIN accepted.\n\n");
                    correctInputs++;
                    menuChoice = 0;
                }
                else{
                    printf("PIN incorrect.\n\n");
                    incorrectInputs++;
                    menuChoice = 0;
                }
            
                break;
            }

            // Change PIN
            case '2':{
                int newPIN = 0;
                int tPIN = 0;

                printf("Enter your new PIN: ");
                scanf("%d", &newPIN);
                
                printf("Please re-enter your new PIN: ");
                scanf("%d", &tPIN);

                if(tPIN == newPIN){
                    printf("PIN changed successfully to %d.\n\n", newPIN);
                    PIN = newPIN;
                }
                else{
                    printf("PINs do not match, your PIN is still: %d\n\n", PIN);
                }

                break;
            }

            // Display (un)successful attempts
            case '3':{
                printf("There has been %d successful attempts to enter the PIN.\n", correctInputs);
                printf("There has been %d unsuccessful attempts to enter the PIN.\n\n", incorrectInputs);
                break;
            }

            // Exit
            case '4':{
                printf("Exiting program...\n");
                ended = 1;
                break;
            }

            // Invalid input
            default:{
                printf("Incorrect choice, please try again.\n\n");
                break;
            }
        }
    }

    return 0;
}