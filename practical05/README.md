# fibonacci.c

- Get the number of values in the series.
- Check if the limit is posistive and continue if yes.
- Initialise the start of the series as 0 and 1 in an array
- Calculate the rest of the terms as the sum of the preceeding two values.
- Print the series in the array.

# arctanh.c

- Get user input precision.
- Get start and end values for the series.
- Calculate the size of the array using `((fabs(start) + fabs(end)) / prec) + 1`.
- Iterate over the start and end value with precision as the increment value.
- Calculate the value using the approximation to Maclaurin series as `artanh1 function` using `(i^ ((2 * n) + 1)) / ((2 * n)+ 1))` using inbuilt functions from math library and store in a variable.
- Calculate the value using the approximations to natural logarithms as `artanh2 function` using  `1/2[(ln(1+x)-ln(1-x))]` and store in a variable.
- Calculate the absolute difference between the 2 values using the `fabs` inbuilt function from math library and print it.