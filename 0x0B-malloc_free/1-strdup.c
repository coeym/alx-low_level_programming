#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly
  * allocated space in memory
  * @str: the string to duplicate
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
int p = 0;
int q = 0;
char *s;

if (str == NULL)
return (NULL);

while (str[q])
{
q++;
}

s = malloc((sizeof(char) * q) +1);

if (s == NULL)
return (NULL);

while (p < q)
{
s[p] = str[p];
p++;
}

s[p] = '\0';
return (s);
}
