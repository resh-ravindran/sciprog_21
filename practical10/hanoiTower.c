#include <stdio.h>

// Move the disk 1 from Rod 1 to Rod 2
// Move the disk 2 from Rod 1 to Rod 3
// Move the disk 1 from Rod 2 to Rod 3

// Shift n-1 disks from source(Rod 1) to middle(Rod 2)
// Shift one disk from source(Rod 1) to destination(Rod 3)
// Shift n-1 disks from middle(Rod 2) to destination(Rod 3)

// The function that shifts the disk using recursion and prints the value of tower of hanoi for given n
void hanoi(int n, int source, int dest, int mid)
{
    // if n is 1 print the values as moved
    if (n == 1)
        printf("The disk %d is moved from %d to %d\n", n, source, dest);
    else
    {
        // shift n-1 disks from source to mid
        hanoi(n - 1, source, mid, dest);
        // print the destination to which it is moved
        printf("The disk %d is moved from %d to %d\n", n, source, dest);
        // shift n-1 disks from mid to dest
        hanoi(n - 1, mid, dest, source);
    }
}

int main(void)
{
    // declare n for the number of discs
    int n;
    // get inputof the number of discs from the user
    printf("Enter number of disks:\n");
    scanf("%d", &n);
    // print the output for the tower of hanoi by calling the function hanoi
    printf("Tower of Hanoi for %d disks is:\n", n);
    // calling the function hanoi
    hanoi(n, 1, 3, 2);
}
