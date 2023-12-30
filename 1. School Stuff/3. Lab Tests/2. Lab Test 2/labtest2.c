/*
    Allow users to convert currency, Euro and Dollar.
    They may also exit the program.

    Enter 3 amounts into a floating-point array.
    Two functions called change_to_Euro() and change_to_Dollar()
    Functions take 1 parameter (a float array) and returns a float number.
    Both functions return the average of 3 currencies in a float.

    Conversion rates:
    €1 = $1.1
    $1 = €0.9

    Call the appropriate function in main() and pass the array.
    Display the passed amounts in the function as well as converted amounts.
    In the functions, calculate the average of the amounts AFTER conversion and return to main.
    Display the average in main.

    Have the program repeat and end gracefully.

    Made by: Ruán Murgatroyd C22400846
    Created: 21/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 3 // Keeps code modular, all references to how many items are 'SIZE'.

float change_to_Euro(float dollars[]); // USD -> EUR
float change_to_Dollar(float euros[]); // EUR -> USD

int main(){

    float amounts[SIZE] = {0};
    int isRunning = 1;
    int choice = 0;
    float average = 0;

    while(isRunning == 1){

        // Clearing the following variables keeps the system robust,
        // and stops unintended behaviour.
        amounts[SIZE] = 0;
        choice = 0;
        average = 0;

        printf("--==<[Conversion Centre]>==--\n");
        printf("Choose an option:\n");
        printf("1. Convert to Euros\n2. Convert to US Dollars\n3. Exit the program\n");
        scanf("%d", &choice);

        // Using Switch as default case handles everything that isn't otherwise specified.
        switch(choice){

            case 1:{
                printf("Enter %d US Dollar amounts, pressing enter after each one (Leave out the currency symbol):\n", SIZE);

                for(int i = 0; i < SIZE; i++){
                    scanf("%f", &amounts[i]);
                } // End For.

                average = change_to_Euro(amounts);

                printf("The average amount is: e%.3f\n\n", average); // Limiting decimal places for neatness.
                break;
            } // End Case 1 - USD -> EUR.

            case 2:{
                printf("Enter %d Euro amounts, pressing enter after each one (Leave out the currency symbol):\n", SIZE);

                for(int i = 0; i < SIZE; i++){
                    scanf("%f", &amounts[i]);
                } // End For.

                average = change_to_Dollar(amounts);

                printf("The average amount is: $%.3f\n\n", average);
                break;
            } // End Case 2 - EUR -> USD.

            case 3:{
                printf("Goodbye!\n");

                isRunning = 0; // Allows graceful end of loop.
                break;
            } // End Case 3 - End Program.

            default:{
                printf("Not a valid option!\n");
                break;
            } // End Default Case.
        } // End Switch.
    } // End While.
    
    return 0;
} // End Main.

float change_to_Euro(float dollars[]){
    float conversionRate = 0.9; // Allows conversion to be easily updated.
    float EURAmount = 0;
    float internalSum = 0;
    float internalAvg = 0;

    for(int i = 0; i < SIZE; i++){
        EURAmount = (dollars[i] * conversionRate);
        internalSum = internalSum + EURAmount;

        printf("$%.2f is e%.2f\n", dollars[i], EURAmount);
    } // End For.

    internalAvg = (internalSum / SIZE); // Allows the passed array

    return internalAvg;
} // End USD -> EUR Function.

float change_to_Dollar(float euros[]){
    float conversionRate = 1.1;
    float USDAmount = 0;
    float internalSum = 0;
    float internalAvg = 0;

    for(int i = 0; i < SIZE; i++){
        USDAmount = (euros[i] * conversionRate);
        internalSum = internalSum + USDAmount;

        printf("e%.2f is $%.2f\n", euros[i], USDAmount);
    } // End For.

    internalAvg = (internalSum / 3);

    return internalAvg;
} // End EUR -> USD Function.