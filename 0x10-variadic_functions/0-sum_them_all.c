#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum of all parameters
  * @n: number of parameters
  *@...: a variable number
  * Return:  If n == 0, 0
  * Otherwise, the sum
  */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int p, sum = 0;

if (n != 0)
{
va_start(args, n);

while (p < n)
{
sum += va_arg(args, int);
p++;
}

va_end(args);
return (sum);
}

return (0);
}
