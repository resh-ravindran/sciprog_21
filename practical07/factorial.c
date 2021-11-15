#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// calculate the factorial if n using the function
int factorialFun(int n)
{
    // return factorial of 0 as 1
    if (n == 0)
    {
        return 1;
    }
    // if not 0 return the factorial as the multiplication of the n terms untill 0 using recursion
    return n * factorialFun(n - 1);
}

// calculate the equation using the function
double calculateEquation(int n, int x)
{
    // inititialize the variables for the equation calculation
    double eq = 0;
    int i = 0;
    for (i = 0; i <= n; i++)
    {
        // implement the polynomial equaltion using pow and factorialFun functions
        eq += (double)pow(x, i) / factorialFun(i);
    }
    return eq;
}

void main()
{
    // define and get the order of the polynomial
    int n, i;
    printf("Enter order of the polynomial\n");
    scanf("%d", &n);

    // initialize the array using
    double *arr = (double *)malloc((n + 1) * sizeof(double));

    for (i = 0; i < n + 1; i++)
    {
        // calculate and store the value of the equation in the arrays
        arr[i] = calculateEquation(i, 1);
        // print the array values
        printf("f(%d) = %0.20f\n", i, arr[i]);
        // print the differrence between the estimate and the value from the polynomial equation
        printf("difference between exp(1) and  f(%d) is %0.20f\n", i, exp(1) - arr[i]);
    }
    // deallocate the array memory
    free(arr);
    arr = NULL;
}