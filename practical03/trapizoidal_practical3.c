#include <stdio.h>
#include <math.h>

void main()
{
    float a = 0;                 // define the lower limit x0 as a
    float b = M_PI / 3;          // define the upper limit xn as b
    float sum = tan(a) + tan(b); //calculate the initial area
    int n = 12;
    float eqi = b / n; // calculate the equidistant section
    int i;
    for (i = 0; i < n; i++)
    {
        //iterate n times and calculate the overall area
        sum += (2 * tan(i * eqi));
    }
    sum *= ((b - a) / (2 * n));              // multiply by the value (b-a)/2n
    printf("calculated value is %f\n", sum); //print the calculated value
    printf("expected value is %f", log(2));  //print the expected value
}