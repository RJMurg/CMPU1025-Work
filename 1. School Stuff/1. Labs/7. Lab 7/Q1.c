/*
    Assuming an int variable called 'arr' with 10 elements, what is arr[8] after the
    following code is executed?

    Made by: Ruán Murgatroyd
    Created: 22/11/22
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < SIZE; i++){
        arr[i] = 9 - i;
    }
    printf("%d\n", arr[8]);

    for(int i = 0; i < SIZE; i++){
        arr[i] = arr[arr[i]];
    }
    printf("%d", arr[8]);

    return 0;
} // end main