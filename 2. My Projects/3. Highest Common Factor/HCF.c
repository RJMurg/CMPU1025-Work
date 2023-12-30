// Boiler Plate Code
#include <math.h>
#include <stdio.h>

// HCF Function Declaration
int hcf(int a, int b) // Declaring int as it returns an integer
{
    int result = fmin(a, b); // Variable Declaration of 'Result' which is the smaller of the two values.
    
    /*
    So this while loop runs only while 'result' is greater than zero.
    While doing that, it sees if 'a' AND 'b' are evenly divisible by 'result', if so, it ends the loop.
    If not, it decrements result and repeats the loop.
    This seems like it is ultimately a very ineffecient design because it's just brute-forcing the answer in a while loop.
    */
    while (result > 0) { // Standard while loop
        if (a % result == 0 && b % result == 0) {
            break; // Then break the while loop.
        }
        result--;
    }
    return result; // return gcd of a and b
}

// Driver program to test above function
int main()
{
    int a = 8426, b = 3218;
    printf("HCF of %d and %d is %d.", a, b, hcf(a, b));
    return 0;
}
// This code is contributed by Suruchi Kumari
// Additional comments and minor by Ruán Murgatroyd, to understand them.
// Source: https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/