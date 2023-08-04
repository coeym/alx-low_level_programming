#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: inputs value
 * @src: inputs value
 * @n: inputs value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int b;

b = 0;
while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}

return (dest);
}
