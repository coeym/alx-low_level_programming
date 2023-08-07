#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
int p = 0;
int q = 0;
int y = 0;
int z = 0;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[p])
p++;
while (s2[q])
q++;
z = p + q;
s = malloc((sizeof(char) * z) +1);
if (s == NULL)
return (NULL);

q = 0;
while (y < z)
{
if (y <= p)
s[y] = s1[y];
if (y >= p)
{
s[y] = s2[q];
q++;
}
y++;
}
s[y] = '\0';
return (s);
}
