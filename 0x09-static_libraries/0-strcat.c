#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
int i;
int b;

i = 0;
while (dest[i] != '\0')
{
i++;
}
b = 0;
while (src[b] != '\0')
{
dest[i] = src[b];
i++;
b++;
}

dest[i] = '\0';
return (dest);
}
