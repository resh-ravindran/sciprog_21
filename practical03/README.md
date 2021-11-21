# trapizoidal_practical3.c

- The variable `a=0 and b=π/3` are defined the lower and upper limits.
- Initialise sum (overall area) as `tan(0) +tan(π/3)`. 
- The equidistant points are calculated by dividing b by n.
-  The overall area is calculated as `(2 * tan(i * eqi))` where i is the nth iteration of the loop from 0 to n where `n=12` is added to the initialised sum.
- Multiply the value with `((b - a) / (2 * n))` where `n=12`.
- Calculate the log value using the inbuilt function log as `log(2)`.
- Calculate the difference between the 2 value and print them.
- There can be minute differnce between the two.