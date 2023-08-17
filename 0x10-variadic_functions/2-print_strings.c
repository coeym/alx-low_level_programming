#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
  * print_strings - prints string
  * @separator: string
  * @n: number of strings
  * ...: a variable
  * Return: If separator is NULL, nothing
  * If one of the strings if NULL, (nil) 
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int p = 0;
char *s;

if (n > 0)
{
va_start(args, n);

while (p < n)
{
s = va_arg(args, char *);
if (s == NULL)
printf("%s", "(nil)");
else
printf("%s", s);

if (p != n - 1 && separator != NULL)
printf("%s", separator);

p++;
}

va_end(args);
}

printf("\n");
}
