/*
    This is an attempted implementation
    of Multiple Mathematical Algorithms in C.

    A: Ruán Murgatroyd
    C. Date: 07/10/22
    U. Date: 25/10/22

    V1.0
*/

/*
    Following on from successfully implementing Euclid's Algorithm,
    I am going to include more mathematical algorithms.
*/

/*
    To Include:
    -> Modulus Maths
        -> With the ability to show workings AND TABLES.
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

int gcd(int, int);

int main(){
    int Choice;
    int Val1;
    int Val2;
    
    printf("Please select which formula you'd like to evaluate:\n1] Euclid's Algorithm\n2] Circular Mathematics\n3] Modular Mathematics\n");
    scanf("%d", &Choice);

    if(Choice == 1){
        printf("---==<[Euclid's Algorithm:]>==---\n\n");

        // Two values inputted by User.
        

        // Value input. [MISSING VALIDATION!!!]
        printf("Please enter the first value: ");
        scanf("%d", &Val1);

        printf("Please enter the second value: ");
        scanf("%d", &Val2);

        printf("\nThe GCD of %d, and %d is: %d", Val1, Val2, gcd(Val1, Val2));

        return 0;
    }
    else if(Choice == 2){
        printf("Circular Mathematics");
    }

    else if(Choice == 3){
        printf("Modular Mathematics");
    }
    else{
        printf("Invalid Input! Program terminated.");
        return 0;
    }

    return 0;

}

// GCD Function
int gcd(int Inp1, int Inp2){

    // Variable declarations in-line with the algorithm.
    // q is substituted as 'round' to save memory.
    int a = fmin(Inp1, Inp2);
    int b = fmax(Inp1, Inp2);
    int r = b-(round(b/a))*a;

    // The while range prevents an eternal loop.
    while(a > 0){

        // This statement goes before the maths is ran so 'a' isn't overwritten with 0 when the GCD is found.
        if(r == 0){
            
            break;
            return a; // Returning 'a' as that is where the GCD would be found in this implementation.

        }

        // Implementation of algorithm.
        b = a;
        a = r;
        r = (b - (round(b/a))*a);

    }

}

/*  Modulus Mathematics Function
    Inp1 would be the first number.
    Inp2 is the modular base.
    Type is whether you want it to
    perform modular mathematics or
    display the tables.
*/
int modulus(int Inp1, int Inp2, char Type){

    return 0;
}