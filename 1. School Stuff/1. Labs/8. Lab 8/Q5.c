/*
    What happens if you try to assign a pointer to any address you pick randomly (e.g. F176BA2)?
    Answer the following questions:
    a) Will the compiler allow you?
    b) If so, print the contents of that address and see what happens, what delimiter should you use?
    c) Write a short program to declare an integer and a pointer. Make the pointer point to the integer. Input an integer value into the integer variable. Using the dereference operator, output the contents of the address stored in the pointer.
    d) Now, increment the pointer (e.g. ptr++) and output the contents of the new address stored in the pointer, what do you see?
    e) Can you assign any value to a random address (e.g. using the dereference operator, can you assign the value '10' into the address FB6546?) Try it.

    Made by: Ruán Murgatroyd
    Created: 29/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
 // Include any other libraries here and press TAB when complete.

int main()
{
    // Answering a) and b)
    const int *ptr = (const int *)0xF176BA2;

    printf("The contents of the address stored in the pointer is %d\n", ptr);

    // Answering c)
    int var1;
    int *ptr2;

    ptr2 = &var1;

    printf("Enter a number: ");
    scanf("%d", &var1);

    printf("The contents of the address stored in the pointer is %d\n", *ptr2);

    // Answering d)
    ptr2++;

    printf("The contents of the address stored in the pointer is %d\n", *ptr2); 

    return 0;
} // end main