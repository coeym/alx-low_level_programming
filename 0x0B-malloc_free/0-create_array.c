#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: The size of the array
  * @c: The char to fill in the array
  * Return: The array. If it fails, null
  */
char *create_array(unsigned int size, char c)

{
unsigned int q;
char *p;

p = malloc(size * sizeof(char));

if (size == 0)
return (NULL);

if (p == NULL)
return (NULL);

for (q = 0; q < size; q++)
{
p[q] = c;
}
return (p);
}
