/*
    Write a program to display how a character array (e.g. char my_word[]) can be
    initialised with a string. Try both ways, i.e. (i) initialising each element of the array
    with a specific character
    (ii) initialise the array automatically with a string in double-quotes.
    
    What happens if you initialise each element of the array and do not include the null character?
    Print the string and see.

    Print out the contents of the array, does the null character get printed?
    Try printing the null character after the last letter in the string - what is dispalyed?

    Change your code and test it to see the different ways you can output the contents of the
    character array as a string.

    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

int main(){

    char my_word[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char my_word2[10] = "Hello";

    printf("my_word: %s my_word2: %s \n", my_word, my_word2);
    
    return 0;
} // end main