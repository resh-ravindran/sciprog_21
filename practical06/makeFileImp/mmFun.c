#include <stdio.h>

void mmFun(int n, int p, int q, double a[n][p], double b[p][q], double c[n][q])
{
    // initialize variable for iteration
    int i, j, k;
    printf("Matrix C is\n");
    // iterate nxqxp
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            // initialize c array values as 0
            c[i][j] = 0;
            for (k = 0; k < p; k++)
            {
                // calculate the c terms as multiplication a rows and b columns and add them to the c[i][j]
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%3.0f", c[i][j]);
        }
        printf("\n");
    }
}