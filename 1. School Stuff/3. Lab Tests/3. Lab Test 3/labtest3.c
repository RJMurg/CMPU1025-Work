/*
    Write a program to help 'Shamrock Air' on passenger info.
    It uses a struct to store flight information
    Sub-struct for date storing.
    It uses a function to enter the details of the passenger (Pass by reference)
    Use a function to display the details of the passengers (Pass by value)

    Made by: Ruán Murgatroyd | C22400846
    Created: 28/03/23
    OS: Windows 10 Pro
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define PASSENGERS 2
#define VSMALL 5
#define SMALL 7
#define MED 16
#define LARGE 26

// Date structure
// It stores the day, month, and year as INTEGERS
struct date
{
    int day, month, year;
}; // end struct

// Passenger data struct
// This struct stores all data EXCEPET the date as strings.
// date is a sub-struct and uses integers. flightDate.day, flightDate.month, etc.
struct passenger_data
{
    char flightNumber[SMALL]; // Flight numbers are usually 5 characters long, 6 for NULL.
    struct date flightDate; // Add data by doing [VARNAME].flightDate.day, etc.
    char surname[LARGE]; // 25 characters + NULL
    char firstName[MED]; // 16 characters + NULL
    char seatNum[VSMALL]; // Allows seats on rows with 2-digits
    char dest[LARGE]; // 25 chars + NULL

}; // end struct

// Function signature to enter Passenger Data
void enterPassengerData(struct passenger_data *);

// Function signature to read Passenger Data.
void readPassengerData(struct passenger_data);

int main(){
    // Struct array allowing dynamic # of passengers.
    struct passenger_data passengers[PASSENGERS];

    printf("Welcome to Shamrock Air Passenger Entry.\n");

    // Dynamic looping code.
    for(int i = 0; i < PASSENGERS; i++){
        printf("\nEnter information for Passenger %d\n", i + 1);
        enterPassengerData(&passengers[i]); // Memory address as it is pass-by-reference.
    } // end for

    printf("All passenger information entered. Reading Passenger Info now:\n\n");

    for(int i = 0; i < PASSENGERS; i ++){
        printf("\nInformation on Passenger %d:\n", i + 1);
        readPassengerData(passengers[i]); // Pass by value.
    } // end for

    printf("\nThank you for using the Shamrock Air Passenger Entry System!");
    
    return 0;
} // end main

// Entering Passenger Data Function.
// Arguments: 1 = Struct pointer.
// All information is done by pass-by-reference.
void enterPassengerData(struct passenger_data *passenger){
    // Initialising all required temporary variables.
    int day = 0, month = 0, year = 0;

    printf("Please enter the flight number: ");
    fgets(passenger->flightNumber, SMALL-1, stdin);
    while(getchar() != '\n'); // Clearing Input Buffer.

    printf("Please enter the date of the flight in the structure DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);

    passenger->flightDate.day = day;
    passenger->flightDate.month = month;
    passenger->flightDate.year = year;
    
    while(getchar() != '\n'); // Clearing Input Buffer.

    printf("Please enter the passenger's first name: ");
    fgets(passenger->firstName, MED-1, stdin);
    // Input clearing no-longer neaded.

    printf("Please enter their surname: ");
    fgets(passenger->surname, LARGE-1, stdin);

    printf("Please enter their Seat number: ");
    fgets(passenger->seatNum, VSMALL-1, stdin);

    while(getchar() != '\n'); // Clearing Input Buffer.
    printf("Finally, please enter their destination: ");
    fgets(passenger->dest, LARGE-1, stdin);
} // end enterPassengerData func.

// Reading Passenger Data Function.
// Arguments: 1 = Structure Pointer.
// All information is pass by value.
void readPassengerData(struct passenger_data passenger){
    printf("FIRST NAME: %s", passenger.firstName);
    printf("SURNAME: %s", passenger.surname);
    printf("FLIGHT NUMBER: %s\n", passenger.flightNumber);
    printf("DATE OF FLIGHT: %d/%d/%d\n", passenger.flightDate.day, passenger.flightDate.month, passenger.flightDate.year);
    printf("DESTINATION: %s", passenger.dest);
    printf("SEAT NUMBER: %s\n", passenger.seatNum);

    printf("--=<[END OF PASSENGER INFORMATION]>=--\n");
} // end readPassengerData func.