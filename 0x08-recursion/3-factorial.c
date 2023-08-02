#include "main.h"

/**
  * factorial - Function that returns the factorial of a number
  * @n: the number to calculate
  * Return: factorial of n
  */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
