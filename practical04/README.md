# tanArray_practical04.c

- The variable `tanArr` is defined as an array and the lower and upper limits are added as the 0th and the n-1th elements.
- The rest are filled with radians values using the function `degreetoradians` using 5 as the equidistant value.
- Initialise sum (overall area) as sum of 0th and the n-1th element values of the array. 
-  The overall area is calculated as `(2 * tanArr[i])` where i is the nth iteration of the loop from 0 to n where `n=12` is added to the initialised sum and tanArr is the array containing the radian values.
- Multiply the value with `((60.0) / (2 * n))` after converting to radians using the function where,`n=12` .
- Calculate the log value using the inbuilt function log as `log(2)`.
- Calculate the difference between the 2 value and print them.
- There can be minute differnce between the two.