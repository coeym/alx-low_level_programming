#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: the value
 * return: natural square root
 */

int _sqrt_recursion(int n)
{
int sqrt = n * n;

if (sqrt == n)
{
return (n);
}
else
{
return (-1);
}
}
