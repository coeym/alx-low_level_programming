#include "main.h"

/**
 * _puts - Prints a string then a new line
 * @str: The string to print
 * Return: Always 0
 */

void _puts(char *str)

{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
