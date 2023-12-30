#include <stdio.h>

int main(){
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &var1, &var2, &var3, &var4);

    printf("You entered: %d %d %d %d", var4, var3, var2, var1);

    return 0;
}