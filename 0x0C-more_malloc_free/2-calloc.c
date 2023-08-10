#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a byte
 * @q: memory
 * @d: char
 * @m: number
 * Return: pointer
 */
char *_memset(char *q, char d, unsigned int m)
{
unsigned int p;

for (p = 0; p < m; p++)
{
q[p] = d;
}

return (q);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *a;

if (nmemb == 0 || size == 0)
return (NULL);

a = malloc(size * nmemb);

if (a == NULL)
return (NULL);

_memset(a, 0, nmemb * size);

return (a);
}
