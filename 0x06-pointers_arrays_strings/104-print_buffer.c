#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size
 * Return: Always 0
 */

void print_buffer(char *b, int size)
{
int a, y, i;

a = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (a < size)
{
y = size - a < 10 ? size - a : 10;
printf("%08x: ", a);
for (i = 0; i < 10; i++)
{
if (i < y)
printf("%02x", *(b + a + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < y; i++)
{
int c = *(b + a + i);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
a += 10;
}
}
