#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @b: input value
 * Return: b value
 */

char *leet(char *b)
{
int i, y;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; b[i] != '\0'; i++)
{
for (y = 0; y < 10; y++)
{
if (b[i] == s1[y])
{
b[i] = s2[y];
}
}
}
return (b);
}

