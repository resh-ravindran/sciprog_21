#include <stdio.h>
#include <math.h>

const int n = 12;
// convert the degrees to radian
const float degreetoradians(float deg)
{
    return ((M_PI * deg) / 180);
}

void main()
{
    float tanArr[n + 1];
    int i;
    for (i = 0; i <= n; i++)
    {
        // iterate and add the radians to an array
        tanArr[i] = tan(degreetoradians(i * 5));
        printf("tanArr[%d] is %f \n", i, tanArr[i]);
    }
    // calculate the sum
    float sum = tanArr[0] + tanArr[n];
    for (i = 1; i < n; i++)
    {
        // iterate n times and calculate the overall area
        sum += 2 * tanArr[i];
    }
    float m_rad = degreetoradians((60.0) / (2 * n));
    sum *= m_rad;

    // print the calculated value
    printf("calculated value is %f\n", sum);
    // print the exepected value
    printf("expected value is %f", log(2));
}