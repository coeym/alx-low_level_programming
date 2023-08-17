#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - Prints anything
  * @format: The conversion specifier to prints
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
va_list args;
f_dt form_types[] = {
{ "c", print_a_char },
{ "i", print_a_integer },
{ "f", print_a_float },
{ "s", print_a_char_ptr }
};
unsigned int p = 0;
unsigned int q = 0;
char *separator = "";

va_start(args, format);

while (format != NULL && format[p])
{
q = 0;
while (q < 4)
{
if (format[p] == *form_types[q].identifier)
{
form_types[q].f(separator, args);
separator = ", ";
}
q++;
}
p++;
}

va_end(args);
printf("\n");
}

/**
  * print_a_char - Prints a char
  * @separator: separator
  * @args: variadic arguments
  * Return: Nothing
  */
void print_a_char(char *separator, va_list args)
{
printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - Prints an integer
  * @separator: separator
  * @args: variadic arguments
  * Return: Nothing
  */
void print_a_integer(char *separator, va_list args)
{
printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - Prints a float
  * @separator: separator
  * @args: variadic arguments
  * Return: Nothing
  */
void print_a_float(char *separator, va_list args)
{
printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - Prints pointer to char
  * @separator: separator
  * @args: variadic arguments
  * Return: Nothing
  */
void print_a_char_ptr(char *separator, va_list args)
{
char *arg = va_arg(args, char *);

if (arg == NULL)
{
printf("%s%s", separator, "(nil)");
return;
}

printf("%s%s", separator, arg);
}
