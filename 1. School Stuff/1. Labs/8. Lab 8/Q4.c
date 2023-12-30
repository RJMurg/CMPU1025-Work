/*
    Complete the following program and observe the output:
    //code
    int var1;
    int *prt;

    var1 = 1;
    ptr = &var1;

    ..
    ..
    printf("the address of var1 is %d", &var1); // the %d should be %p
    printf("ptr contains %p", ptr); // there is a missing & and shoud be &ptr

    printf("*ptr contains %d", ptr); // There is a missing deference operator and should be *ptr

    Made by: Ruán Murgatroyd
    Created: 29/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>

int main()
{
    int var1;
    int *ptr;

    var1 = 1;
    ptr = &var1;

    printf("the address of var1 is %d\n", &var1);
    printf("ptr contains %p\n", ptr);

    printf("*ptr contains %d\n", &ptr);

    return 0;
} // end main