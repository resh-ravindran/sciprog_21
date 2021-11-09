#include <stdio.h>

void main()
{
    int n;
    // choose the limit for n
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // check if n is postive or not continue only if postive or throwing error message
    if (n < 0)
    {
        printf("n is not postive!!");
    }
    else
    {
        int a[n], i = 0;
        // enter the start values
        a[0] = 0;
        a[1] = 1;
        // calculate the rest of the terms as the diffference between the preceeding two values
        for (i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        // print the series with in the range
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            // add commasn untill the last entry
            if (i != n - 1)
            {
                printf(", ");
            }
        }
    }
}