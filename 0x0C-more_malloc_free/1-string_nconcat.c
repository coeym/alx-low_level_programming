#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - function that concatenates two strings
  * @s1: string
  * @s2: string
  * @n: number of bytes
  * Return: pointer to string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int p = 0;
unsigned int q = 0;
unsigned int m = 0;
unsigned int j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[p])
p++;

while (s2[m])
m++;

if (n >= m)
j = p + m;
else
j = p + n;

s = malloc(sizeof(char) * j + 1);
if (s == NULL)
return (NULL);

m = 0;
while (q < j)
{
if (q <= p)
s[q] = s1[q];

if (q >= p)
{
s[q] = s2[m];
m++;
}
q++;
}
s[q] = '\0';
return (s);
}
