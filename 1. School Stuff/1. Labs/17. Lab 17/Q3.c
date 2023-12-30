/*
    Fun stuff

    Made by: Ruán Murgatroyd | C22400846
    Created: 21/03/23
    OS: Windows 10 Pro
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

struct date{
    int day, month, year;
};

struct person{
    char firstName[51];
    char surname[51];
    struct date dob;
    float weight, height;
    char eyeColour[11];
    char citizenship[51];
};

int main(){

    struct person personOne, personTwo;

    printf("Enter the person's First Name:\n");
    fgets(personOne.firstName, 50, stdin);

    printf("Enter their Second Name:\n");
    fgets(personOne.surname, 50, stdin);

    printf("Enter their date of birth (DD/MM/YYYY):\n");
    scanf("%d/%d/%d", &personOne.dob.day, &personOne.dob.month, &personOne.dob.year);

    printf("Enter their height in meters:\n");
    scanf("%f", &personOne.height);

    printf("Enter their weight in KG:\n");
    scanf("%f", &personOne.weight);

    printf("Enter their Eye Colour:\n");
    while(getchar() != '\n');
    fgets(personOne.eyeColour, 10, stdin);

    printf("Finally, enter their country of citizenship:\n");
    fgets(personOne.citizenship, 50, stdin);

    printf("\n\nYour entered data is:\nName: %s %s", personOne.firstName, personOne.surname);
    printf("\nDate of Birth: %d/%d/%d\nHeight: %.2fm", personOne.dob.day, personOne.dob.month, personOne.dob.year, personOne.height);
    printf("\nWeight: %.2fKG\nEye Colour: %s\nCitizenship: %s", personOne.weight, personOne.eyeColour, personOne.citizenship);

    printf("\n\nCopying to personTwo.");
    strcpy(personTwo.firstName, personOne.firstName);
    strcpy(personTwo.surname, personOne.surname);
    strcpy(personTwo.eyeColour, personOne.eyeColour);
    strcpy(personTwo.citizenship, personOne.citizenship);

    personTwo.height = personOne.height;
    personTwo.weight = personOne.weight;

    personTwo.dob.day = personOne.dob.day;
    personTwo.dob.month = personOne.dob.month;
    personTwo.dob.year = personOne.dob.year;

    printf("\n\nCopied data is:\nName: %s %s", personTwo.firstName, personTwo.surname);
    printf("\nDate of Birth: %d/%d/%d\nHeight: %.2fm", personTwo.dob.day, personTwo.dob.month, personTwo.dob.year, personTwo.height);
    printf("\nWeight: %.2fKG\nEye Colour: %s\nCitizenship: %s", personTwo.weight, personTwo.eyeColour, personTwo.citizenship);
    
    return 0;
} // end main