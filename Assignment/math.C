//Nicholas Klein
//Introduction to Embedded Systems- Lab 0
//September 10, 2018

#include "math.h"

// + Add (num1 + num2)
// Adds two integers and returns the sum
int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;

    return sum;
}

// - Subtract (num1 - num2)
// Subtracts num2 from num1 and returns the difference
int subtract(int num1, int num2)
{
    int diff;
    diff = num1 - num2;

    return diff;
}

// * Multiply (num1 * num2)
// Multiplies two integers and returns the product
int multiply(int num1, int num2)
{
    int prod;
    prod = num1 * num2;

    return prod;
}

// Divide (num1 / num2)
// Divides num1 by num2 and returns the quotient as a whole number with no remainder
int divide(int num1, int num2)
{
    int quot;
    quot = num1 / num2;

    return quot;
}

// % Modulus (num1 % num2)
// Divides num1 by num2 and returns the remainder of the quotient
int modulus(int num1, int num2)
{
    int mod;
    mod = num1 % num2;

    return mod;
}

// < Left Shift (num1 << num2)
// Performs a binary left shift on num1 left by num2 spaces
int lshift(int num1, int num2)
{
    int L;
    L = num1 << num2;

    return L;
}

// > Right Shift (num1 >> num2)
// Performs a binary right shift on num1 left by num2 spaces
int rshift(int num1, int num2)
{
    int R;
    R = num1 >> num2;

    return R;
}

// & Bitwise AND (num1 & num2)
// Performs a binary bitwise AND on num1 and num2
int bAND(int num1, int num2)
{
    int band;
    band = num1 & num2;

    return band;
}

// | Bitwise OR (num1 | num2)
// Performs a binary bitwise OR on num1 and num2
int bOR(int num1, int num2)
{
    int bor;
    bor = num1 | num2;

    return bor;
}

// ^ Bitwise XOR (num1 ^ num2)
// Performs a binary bitwise XOR on num1 and num2
int bXOR(int num1, int num2)
{
    int bxor;
    bxor = num1 ^ num2;

    return bxor;
}

// ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
// Performs a binary bitwise inverse on num1
int bINV(int num1, int num2)
{
    int binv;
    binv = ~num1;

    return binv;
}

//Selects the function based on the operator
int math(int num1, int num2, char Operator)
{
    int ans;

    switch (Operator)
    {
        case '+':
            ans = add(num1, num2);
            break;
        case '-':
            ans = subtract(num1, num2);
            break;
        case '*':
            ans = multiply(num1, num2);
            break;
        case '/':
            ans = divide(num1, num2);
            break;
        case '%':
            ans = modulus(num1, num2);
            break;
        case '<':
            ans = lshift(num1, num2);
            break;
        case '>':
            ans = rshift(num1, num2);
            break;
        case '&':
            ans = bAND(num1, num2);
            break;
        case '|':
            ans = bOR(num1, num2);
            break;
        case '^':
            ans = bXOR(num1, num2);
            break;
        case '~':
            ans = bINV(num1, num2);
            break;
    }
    return ans;
}

//main added to avoid compiler errors
int main()
{

}
