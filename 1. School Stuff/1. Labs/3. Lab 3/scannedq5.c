#include <stdio.h>

int main(){
    int age = 0;
    int beats = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    beats = age*(75*60*24*365);

    printf("Your heart has beat %d times in your life.", beats);

    return 0;
}