/*
    Write a program declaring an integer (num1), a character (char1) and 2 pointers (prt1 that points to an integer and ptr2 that points to a character).
    Initialise num1 and char1 to contain an integer and hcaracter.
    Initialise ptr1 to point to num1 and initialise ptr2 to point to char1.

    Your program should then:
    a) Print the contents AND address of num1 and char1 (on separate lines).
    b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses printed in a).
    c) Using the dereference operator, print the content of the address stored in prt1 and ptr2.

    Do ptr1 and ptr2 have address locations? Check and see, i.e., print the address of ptr1 and ptr2.

    Try changing the delimiters in your printf statements and see what happens.

    Made by: Ruán Murgatroyd
    Created: 06/12/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
 // Include any other libraries here and press TAB when complete.

int main(){

    int num1 = 10;
    char char1 = 'c';
    int *ptr1 = &num1;
    char *ptr2 = &char1;

    // A - Print contents.
    printf("Num1 contains: %d at memory address %p.\n", num1, ptr1);
    printf("Char1 contains: %c at memory address %p.\n");

    // B - Print contents of the pointers.
    printf("Ptr1 contains: %p.\n", ptr1);
    printf("Ptr2 contains: %p.\n", ptr2);

    // C - Use dereference to print the content of the addresses.
    printf("*Ptr1 contains: %d", *ptr1);
    printf("*Ptr2 contains: %c", *ptr2);

    return 0;
} // end main