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
#include <string.h>
#include <ctype.h> // Required for isdigit().
#define ARRAYSIZE 5 // Easily modifable array size.

int main(){
    // Makes the while loop run.
    int ended = 0;

    // All PIN related arrays.
    char PIN[ARRAYSIZE] = "1234"; // Default PIN. It is 5 elements long for the null terminator.
    char userPIN[ARRAYSIZE] = "";
    char newPIN[ARRAYSIZE] = "";
    char tempPIN[ARRAYSIZE] = "";

    int correctInputs = 0;
    int incorrectInputs = 0;
    int digits = 0;
    char quitChoice = ' ';
    char menuChoice = ' ';

    // Main menu
    while(ended == 0){

        // Menu display.
        printf("<[Automated Teller Machine]>");
        printf("\nMake a selection:\n(1) Enter PIN\n(2) Change PIN\n(3) Display (un)successful attempts\n(4) Exit\n");
        scanf(" %[^\n]s", &menuChoice);

        // Checking
        if((strlen(&menuChoice)) == 1){
            switch(menuChoice){
                // Enter PIN
                case '1':{
                    printf("Enter your PIN: ");

                    // The space in the scanf() clears the whitespace,
                    // and the brackets includes whitespaces until a new line is present.
                    scanf(" %[^\n]s", &userPIN);

                    // This checks if the user entered a 4 digit PIN.
                    if(strlen(userPIN) == 4){

                        // This checks if the entered PIN is correct.
                        if(strcmp(userPIN, PIN) == 0){
                            printf("PIN accepted.\n\n");
                            correctInputs++;
                            menuChoice = 0;
                        }
                        else{
                            printf("[!!!] PIN incorrect.\n\n");
                            incorrectInputs++;
                            menuChoice = 0;
                        }
                    }
                    // This checks if a user entered a PIN that is not 4 digits.
                    else if(strlen(userPIN) > 4){
                        printf("[!!!] Your entered PIN is TOO LONG!\n\n");
                    }
                    else{
                        printf("[!!!] Your entered PIN is TOO SHORT!\n\n");
                    }
                
                    break;
                } // End of case 1.

                // Change PIN
                case '2':{

                    printf("Enter your new PIN: ");
                    scanf(" %[^\n]s", &newPIN);
                    
                    // This checks if the user entered a 4 digit PIN.
                    if(strlen(newPIN) == 4){

                        // This checks if the entered PIN contains characters instead of just numbers.
                        for(int i = 0; i < ARRAYSIZE; i++){
                            if(isdigit(newPIN[i])){
                                digits++;
                            } // End if.
                        } // End for.

                        // If it just contains numbers, digits will equal to 4.
                        if(digits == 4){
                            printf("Enter your new PIN again: ");
                            scanf("%s", &tempPIN);
                        } // End if.
                        // If it contains characters, this will run instead.
                        else{
                            printf("[!!!] Your PIN MUST be numbers ONLY!\n\n");
                            break;
                        } // End else.
                    } // End if.
                    // This checks if a user entered a PIN that is not 4 digits.
                    else if(strlen(newPIN) < 4){
                        printf("[!!!] Your new PIN is TOO SHORT!\n\n");
                    } // End if.
                    else{
                        printf("[!!!] Your new PIN is TOO LONG!\n\n");
                    } // End else.

                    // For tempPIN, the same input validation is completed as for newPIN.
                    // The only difference is I do not do character checking, as I already did that for newPIN.
                    if(strlen(tempPIN) == 4){
                        if(strcmp(tempPIN, newPIN) == 0){
                            printf("PIN changed.\n\n");
                            strcpy(PIN, newPIN);
                        } // End if.
                        else{
                            printf("[!!!] PINs do not match!\n\n");
                        } // End else.
                    } // End if.
                    else if(strlen(tempPIN) < 4){
                        printf("[!!!] Your repeat PIN is TOO SHORT!\n\n");
                    } // End else if.
                    else{
                        printf("[!!!] Your repeat PIN is TOO LONG!\n\n");
                    } // End else.

                    break;
                } // End of case 2.

                // Display (un)successful attempts
                case '3':{
                    printf("There has been %d successful attempts to enter the PIN.\n", correctInputs);
                    printf("There has been %d unsuccessful attempts to enter the PIN.\n\n", incorrectInputs);
                    break;
                } // End of case 3.

                // Exit
                case '4':{
                    printf("Are you sure you want to exit? (Y/N): ");
                    scanf(" %[^\n]s", &quitChoice);

                    if(quitChoice == 'Y' || quitChoice == 'y'){
                        ended = 1;
                        printf("Goodbye!");
                    } // End if.
                    else if(quitChoice == 'N' || quitChoice == 'n'){
                        printf("Returning to menu...\n\n");
                        break;
                    } // End elseif.
                    else{
                        printf("[!!!] Invalid input.\n\n");
                    } // End else.
                    
                    break;
                } // End of case 4.

                // Invalid input
                default:{
                    printf("[!!!] Incorrect choice, please try again.\n\n");
                    break;
                } // End of default.
            }
        } // End if.
        else{
            printf("[!!!] Choices should be a single digit!\n\n");
        } // End else.
    }

    return 0;
} // End main.