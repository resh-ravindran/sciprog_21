#include <stdio.h>
#include <stdlib.h>

// function takes an integer as an argument and returns apointer to an allocated memory block of that many integers
int *allocatearray(int n)
{
    // calculate the size of int and allocates the memory to an array
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Array with size %d is allocated\n", n);
    // return the allocated array
    return arr;
}

// function that takes a pointer to an array of integers and fills everycell of the array with a one
void fillwithones(int *arr, int n)
{
    int i;
    // iterate over the number of elements
    for (i = 0; i < n; i++)
    {
        // fill in all values as 1
        arr[i] = 1;
    }
    printf("Array of %d elements is filled with 1\n", n);
}

// function that takes a pointer to an array of integers and prints itselements on screen
void printarray(int *arr, int n)
{
    int i;
    // iterate over the number of elements
    for (i = 0; i < n; i++)
    {
        // print the values in the array
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

// function to free the allocated memory.
void freeArray(int *arr)
{
    // use the library function to deallocate the used memory for the array
    free(arr);
    printf("Array deallocated...");
}

void main()
{
    // initialise the size of the array and get it from the user
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);

    // function call and assign the return value to the new array
    int *arr = allocatearray(n);
    // function call and pass arguments as the size of array and the array returned from the previous function
    fillwithones(arr, n);
    // function call and pass arguments as the size of array and the array returned from the previous function
    printarray(arr, n);
    // function call and pass argument as the array returned from the previous function
    freeArray(arr);
    // assign the array as null
    arr = NULL;
}