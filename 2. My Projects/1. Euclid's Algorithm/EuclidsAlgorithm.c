/*
    This is an attempted implementation
    of Euclid's Algorithm in C.

    A: IrishTnT
    C. Date: 04/10/22
    U. Date: 12/10/22

    V1.4
*/

/*
    Euclid's Algorithm is: b = q(a) + r which was taught in a Maths Lecture.
    I worked on this program with the intention to attempt to further learn C.
    It's my first funtion written in C.

    The order of variable overwrites in the while loop is VITAL to ensuring it
    properly works.

    I feel I could have used modulus to get 'r' in a more effecient manner, but
    I decided to keep it similar to how it is done by-hand.

    I was attempting to do input validation on the two entered values, as the
    code exhibits unintended behaviour if any invalid input is entered. I cannot
    yet find a validation method that I understand.

    V1.2 CL:
    -> With input, changed location of GCD function and called it earlier.

    V1.3 CL:
    -> Fixed a broken function where I was breaking the loop before I returned
       any value, causing the function to return incorrect results.

    V1.4 CL:
    -> Added the algorithm printer to show workings.
*/


// Boilerplate
#include <stdio.h>
#include <math.h>

/*
It appears the way Michael Collins teaches functions is to write them after main().
This is to aid readability, as main() is primary to any C program.
As such, to make the compiler correctly read the code, you must declare the function
before main() so it is not ignored. This does that.
*/
int gcd(int Inp1, int Inp2);

// Using void as I don't see a need for it to return a number.
int main(void){

    // Two values inputted by User.
    int Val1;
    int Val2;

    // Value input. [MISSING VALIDATION!!!]
    printf("Please enter the first value: ");
    scanf("%d", &Val1);

    printf("Please enter the second value: ");
    scanf("%d", &Val2);

    printf("\n\nThe GCD of %d, and %d is: %d", Val1, Val2, gcd(Val1, Val2));

    return 0;
}

// GCD Function
int gcd(int Inp1, int Inp2){

    // Variable declarations in-line with the algorithm.
    // q is substituted as 'round' to save memory.
    int a = fmin(Inp1, Inp2);
    int b = fmax(Inp1, Inp2);
    int r = b-(round(b/a))*a;
    int q = round(b / a);

    // The while range prevents an eternal loop.
    while(a > 0){

        // Prints the algorithm as it is written by-hand
        printf("\n%d = %d(%d) - %d", b, q, a, r);

        // This statement goes before the maths is ran so 'a' isn't overwritten with 0 when the GCD is found.
        if(r == 0){
            
            return a; // Returning 'a' as that is where the GCD would be found in this implementation.
            break;

        }

        // Implementation of algorithm.
        b = a;
        a = r;
        q = round(b / a);
        r = b-a*round(b/a);

    }

}