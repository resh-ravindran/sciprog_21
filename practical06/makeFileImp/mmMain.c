#include <stdio.h>

void main()
{
    // define n=5,p=3, and q=4.
    int n = 5, p = 3, q = 4;
    // declare three arrays A, B, and C of type double
    double a[n][p], b[p][q], c[n][q];
    // initialize values for iteration
    int i, j, k;
    // initialize and print the array a
    printf("Matrix A is\n");
    // iterate nxp
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            // calculate a[i][j] =i+j
            a[i][j] = i + j;
            printf("%3.0f", a[i][j]);
        }
        printf("\n");
    }
    // initialize and print the array b
    printf("Matrix B is\n");
    // iterate pxq
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            // calculate b[i][j] =i-j
            b[i][j] = i - j;
            printf("%3.0f", b[i][j]);
        }
        printf("\n");
    }

    // matrix multiplication and assigning to c and printing by calling function
    mmFun(n, p, q, a, b, c);
}
