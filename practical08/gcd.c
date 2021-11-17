#include <stdio.h>

// function to produce gcd using iterations
int iterativegcd(int a, int b)
{
    int temp;
    // iterate until b is not 0
    do
    {
        // store b in a temp variable
        temp = b;
        // calculate the new value of b as in the psuedocode
        b = a % b;
        // change value of a as old b value from temp variable
        a = temp;
    } while (b != 0);
    // return the final value of a
    return a;
}

// function to produce gcd using recursion
int recursivegcd(int a, int b)
{
    // return a if b
    if (b == 0)
    {
        return a;
    }
    // call the function with new values of a as b and b as a%b
    return recursivegcd(b, a % b);
}

int main()
{
    // initialize a and b
    int a, b;
    // get the values of a and b from the user
    printf("Enter a and b to find the GCD\n");
    scanf("%d", &a);
    scanf("%d", &b);
    // check if a and b are postive and continue only if a and b are postive
    if (a < 0 || b < 0)
    {
        printf("a and b should be positive!\n");
    }
    else
    {
        // print the value from iterations
        printf("The GCD of %d, %d is %d using the iterative function \n", a, b, iterativegcd(a, b));
        // print the value from recursive method
        printf("The GCD of %d, %d is %d using the recursive function \n", a, b, recursivegcd(a, b));
    }
}