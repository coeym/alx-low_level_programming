#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int x, n, p, y;

p = 0;

for (x = 0; s[x] != '\0';x++)
{
y = 0;

for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[x])
{
p++;
y = 1;
}
}

if (y == 0)
return(p);
}

return (p);
}
