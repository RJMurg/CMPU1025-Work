/*
    Write a program to demonstrate the use of Pass by Value with a
function. Begin by creating an integer variable in your main() and initialise it to 1.
Print this value here. Next, call your function and pass this variable as a parameter to
the function. Increment the parameter in your function by 2 and print this value. Your
function should end here, and control passed back to your main(). Print the value of
the variable in your main() again and see if it has changed value. Did the function
increment the variable in your main()?
6. Pass by Reference. Write a program similar to Q5 above but this time use Pass by
Reference to modify the integer variable declared in main().

    Made by: Ruán Murgatroyd
    Created: 08/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

void passByReference(int *pointer);

int main(){

    int theNumber = 16;
    int *thePointer = &theNumber;

    printf("The Number currently stands at: %d\n", theNumber);
    passByReference(thePointer);
    printf("Now it stands at: %d", theNumber);
    
    return 0;
} // end main

void passByReference(int *pointer){
    *pointer = *pointer + 1;
}

auto int num1 = 0;