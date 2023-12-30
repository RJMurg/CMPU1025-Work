/*
    Given

    char *text = "some text";
    What happens for:

    (a) printf("%s\n", text);
    (b) printf("%c\n", *text);
    (c) printf("%c\n", *"more text");
    (d) printf("%c\n", *(text + 1));
    (e) printf("%s", text + 1);
    (f) printf(text);
    (g) *(text + 4) = '\0'; printf("\n%s\n", text);
    (h) printf("%c", "text"[2]);
    (i) printf("%s", "text" + 2);

    Made by: Ruán Murgatroyd
    Created: 28/02/23
    OS: Windows 10
    IDE: Visual Studio Code
    Compiler: GCC
*/

#include <stdio.h>
 #include <string.h>

int main(){

    char *text = "some text";
    printf("%s\n", text);

    //strcpy(text, "some text\0");
    printf("%c\n", *text);

    //strcpy(text, "some text\0");
    printf("%c\n", *"more text");

    //strcpy(text, "some text\0");
    printf("%c\n", *(text + 1));

    //strcpy(text, "some text\0");
    printf("%s", text + 1);

    //strcpy(text, "some text\0");
    printf(text);

    //strcpy(text, "some text\0");
    *(text + 4) = '\0';

    //strcpy(text, "some text\0");
    printf("\n%s\n", text);

    //strcpy(text, "some text\0");
    printf("%c", "text"[2]);

    //strcpy(text, "some text\0");
    printf("%s", "text" + 2);    
    
    return 0;
} // end main