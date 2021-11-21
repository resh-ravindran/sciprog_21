#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

void main()
{
    // initialize store the size of the sqauare and variables for iterations
    int n, i, j;
    // get the size of the square from the user and store in n
    printf("Enter the size of the square:\n");
    scanf("%d", &n);

    // allocate memory for the array and its elements
    int **arr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        arr[i] = malloc(n * sizeof(int));
    }

    // get the elements in the arrayfrom the user
    printf("Enter the elements in the square\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // store it in arr
            scanf("%d", &arr[i][j]);
        }
    }
    // check if the array is a magic sqaure using the function from the magic_square.h file
    printf("The square %s a magic square", isMagicSquare(arr, n) ? "is" : "is not");

    // deallocate the memory of the array and its elements
    for (i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);
}