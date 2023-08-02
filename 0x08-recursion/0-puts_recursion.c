
#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * followed by a new line
 * @s: input
 * Return: Always 0
 */
void _putchar(char s);
void _puts_recursion(char *s){
if (*s)
{
s++;
_puts_recursion(s);
}

else
_putchar('\n');
}
