#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches 
 * a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0 
 */

char *_strpbrk(char *s, char *accept)
{
int p, y;

for (p = 0; s[p] != '\0'; p++)
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[p] == accept[y])
return (s + p);
}
}
return (NULL);
}

