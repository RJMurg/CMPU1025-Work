/*
    Modify Q1 to:
    a) Declare a pointer ptr3 that points to an integer Initialise this to point to a character. Does this compile, why or why not?
    b) Using the dereference operator, print the contents of the address in ptr3 with %d AND %c. Is there a difference? If yes explain why as a comment.

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
    char *ptr3 = &char1;


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