#include "main.h"

/**
  * _puts_recursion - Function that print a string, followed by a new line
  * @s: the string to print
  * Return: Always 0
  */
void _puts_recursion(char *s);
void _putchar(char);
{
if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
if (*s == '\0')
{
_putchar('\n');
return;
}
}
