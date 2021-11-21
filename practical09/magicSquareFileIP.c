#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_LEN 100

int getLines(char fileName[MAX_LEN])
{
    // declare the file variable to access the file
    FILE *f;
    // open the file and assign to the file variable
    f = fopen(fileName, "r");
    // declare variable to read through the file
    int ch_read, count = 0, ele = 0;
    // iterate over the file until the end of file
    while ((ch_read = fgetc(f)) != EOF)
    {
        // read the text until it is in the next line and calculate the number of lines
        if (ch_read == '\n')
        {
            // increment for every next line character
            count++;
        }
    }
    // print the number of lines in the file
    printf("Number of lines in the file = %d\n", count);
    // close the file
    fclose(f);
    // return the number of lines
    return count;
}

void main()
{
    // define a file
    FILE *f;
    // define a variable to store the
    char fileName[MAX_LEN];
    // define variable to store the size of the sqauare and variables for iterations
    int n, i, j;
    // get the file name from the user
    printf("Enter the file name:\n");
    // store it into the variable
    scanf("%s", &fileName);
    // get the number of lines in the variable and store it into the array
    n = getLines(fileName);

    // allocate memory for the array and its elements
    int **arr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        arr[i] = malloc(n * sizeof(int));
    }

    // open the file in read mode
    f = fopen(fileName, "r");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // scan the file and assign terms into arr
            fscanf(f, "%d", &arr[i][j]);
        }
    }
    fclose(f);
    // check if the array is a magic square using the function from the magic_square.h file
    printf("The square %s a magic square\n", isMagicSquare(arr, n) ? "is" : "is not");

    // deallocate the memory of the array and its elements
    for (i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);
}