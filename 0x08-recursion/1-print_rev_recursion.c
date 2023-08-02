#include "main.h"

/**
  * _print_rev_recursion - Function that prints a string in reverse
  * @s: the string to reverse
  * Return: Always 0
  */
void _putchar(char s);
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
if (*s == '\0')
{
return;
}
}
