#include <stdio.h>

int main(){
    char inpa = ' ';
    char inpb = ' ';

    printf("Please enter your first character: ");
    scanf("%1s", &inpa);

    printf("Please enter your second character: ");
    scanf("%1s", &inpb);

    printf("You have entered:\n%c\n%c", inpa, inpb);
    

    return 0;
}