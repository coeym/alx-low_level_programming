#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of element
  * @size: size of an element
  * Return: pointer to the memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *b;
int p = 0;
int j = 0;

j = nmemb * size;
b = malloc(j);

if (b == NULL)
return (NULL);

if (nmemb == 0 || size == 0)
return (NULL);

while (p < j)
{
b[p] = 0;
p++;
}

return (b);
}
