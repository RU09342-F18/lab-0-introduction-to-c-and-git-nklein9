# Math Functions in C
Author: Nicholas Klein

Includes:

   math.h    Authored by Russell Trafford
   
   math.c


Created on: September 10, 2018

Last Edit: September 10, 2018


## Using the code
Import both math.h and math.c into your main.c file as shown below. Remove the main function from math.c.

'''C
#include <math.h>
#include <math.c>
'''

## Contents and functions
### math.h
Math.h was created on Aug 22, 2017, last edited on Sept 7, 2018, and authored by Russell Trafford it provides the objective of the lab and declares the math function used in math.c.

### math.c
Math.c houses the main code of the math function as well as the individual functions for each mathmatical procedure.

- The math function is a switch statement that changes which math procedure is run based on the operator. The inputs are num1, num2, and operator. num1 and num2 are integers to be worked on and operator is the operation that will be run.
- The add function adds two integers and returns the sum.
- The subtract function subtracts num2 from num1 and returns the difference.
- The multiply function multiplies two integers and returns the product.
- The divide function divides num1 by num2 and returns the quotient as a whole number with no remainder.
- The modulus function Divides num1 by num2 and returns the remainder of the quotient.
- The lshift function performs a binary left shift on num1 left by num2 spaces.
- The rshift function performs a binary right shift on num1 left by num2 spaces.
- The bAND function performs a binary bitwise AND on num1 and num2.
- The bOR function performs a binary bitwise OR on num1 and num2.
- The bXOR function performs a binary bitwise XOR on num1 and num2.
- The bINV function performs a binary bitwise inverse on num1.
