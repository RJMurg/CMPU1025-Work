/*
    Given the array
    char name[] = {'R', 'o', 'b', 'e', 'r', 't'};

    What is wrong with the following:

    (a) puts(name);
    (b) scanf("%s", &name);
    (c) strcpy(name, "Philip");
    (d) *(name + 5) = "a";
    (e) name = "Philip";


    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
#include <string.h>

int main(){

    char name[] = {'R', 'o', 'b', 'e', 'r', 't'};

    // Part (a)
    puts(name);

    // Problem, Array has no null terminator
    // Solution
    char nament[] = {'R', 'o', 'b', 'e', 'r', 't', '\0'};



    // Part (b)
    //scanf("%s", &name);
    puts(name);

    // Problem
    // You do not need the ampersand.
    // "Strings" in C are just character arrays.
    // Arrays as a variable type are pointers to a block in memory.
    // Asking for "name" as a variable, no ampersand is just a pointer
    // To the fist element in the array.

    // Solution
    //scanf("%s", name);
    puts(name);



    // Part (c)
    strcpy(name, "Philip");
    puts(name);

    // Problem
    // "Philip" is missing a NULL CHARACTER (\0) which is a problem
    // for strcpy as it operates on null-terminated strings.

    // Solution
    strcpy(name, "Philip\0");
    puts(name);

    // Part (d)
    // *(name + 5) = "a";
    puts(name);

    // Problem, "" is reserved for strings, you are entering a
    // pointer (as strings are arrays and arrays are pointers)
    // into the array which throws an error.

    // Solution
    *(name + 5) = 'a';
    puts(name);

    // Part (e)
    //name = "Philip";
    puts(name);

    // Problem
    // Strings should ideally be changed with strcpy(DEST, SRC + \0);

    // Solution
    strcpy(name, "Philip\0");
    puts(name);
    
    
    return 0;
} // end main