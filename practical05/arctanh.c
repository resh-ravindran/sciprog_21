#include <stdio.h>
#include <math.h>

// generate the series using the approximation to Maclaurin series
float artanh1(double i, double prec)
{
    double tan1 = 0, elem;
    int n = 0;
    do
    {
        // implement the power 2n+1
        double val = (2 * n) + 1;
        // implement (x^(2n+1))/(2n+1)
        elem = pow(i, val) / val;
        // add it to the series
        tan1 += elem;
        // increment the n for the series
        n++;
        // break the loop when element in the series is smaller than given precision as the series is infinite
    } while (fabs(elem) >= prec);
    return tan1;
}
// generate the series using the approximations to natural logarithms
float artanh2(double i)
{
    // implement the expression for natural logarithms as 1/2[(ln(1+x)-ln(1-x))]
    return (log(1 + i) - log(1 - i)) / 2;
}

void main()
{
    // get user i/p precision for calculating delta
    double prec;
    printf("Enter delta: ");
    scanf("%lf", &prec);

    // get start and end values for the series
    double start, end;
    printf("Enter start and end for the series: ");
    scanf("%lf", &start);
    scanf("%lf", &end);

    // calculate the delta value as the size of the array
    double a = ((fabs(start) + fabs(end)) / prec) + 1;
    int delta = a;
    double tan1[delta], tan2[delta];
    double i;
    int j = 0;
    // iterate over the start and end value with prec as the increment value
    for (i = start; i <= end; i += prec)
    {
        // call the method artanh1
        tan1[j] = artanh1(i, prec);
        // call the method artanh2
        tan2[j] = artanh2(i);
        // find the difference between the 2
        double diff = fabs(tan1[j] - tan2[j]);
        printf("tan1(%.3lf) - tan2(%.3lf) = %10lf \n", i, i, diff);
        // increment j for adding the series in to the two arrays
        j++;
    }
}