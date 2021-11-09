#include <stdio.h>

void main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("n is not postive!!");
    }
    else
    {
        int a[n], i = 0;
        a[0] = 0;
        a[1] = 1;
        for (i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            if (i != n - 1)
            {
                printf(", ");
            }
        }
    }
}