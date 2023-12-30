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
#include <stdlib.h>
#include <string.h>
#define ARRAYSIZE 5

int main(){
    int ended = 0;
    char PIN[ARRAYSIZE] = "1234"; // Default PIN. It is 5 elements long for the null terminator.
    char userPIN[ARRAYSIZE] = "";
    int correctInputs = 0;
    int incorrectInputs = 0;
    char menuChoice = ' ';

    // Main menu
    while(ended == 0){

        // Menu display.
        printf("<[Automated Teller Machine]>");
        printf("\nMake a selection:\n(1) Enter PIN\n(2) Change PIN\n(3) Display (un)successful attempts\n(4) Exit\n");
        scanf("%s", &menuChoice);

        // Checking
        if((strlen(&menuChoice)) == 1){
            switch(menuChoice){
                // Enter PIN
                case '1':{
                    printf("Enter your PIN: ");
                    scanf("%4s", &userPIN);
                    if(strlen(userPIN) == 4){
                        if(strcmp(userPIN, PIN) == 0){
                            
                            printf("PIN accepted.\n\n");
                            correctInputs++;
                            menuChoice = 0;
                        }
                        else{
                            printf("PIN incorrect.\n\n");
                            incorrectInputs++;
                            menuChoice = 0;
                        }
                    }
                    else if(strlen(&userPIN) > 4){
                        printf("Your entered PIN is TOO LONG!\n");
                    }
                    else{
                        printf("Your entered PIN is TOO SHORT!\n");
                    }
                
                    break;
                }

                // Change PIN
                /*case '2':{
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
                }*/

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
        else{
            printf("\nChoices should be a single number!");
        }
    }

    return 0;
}