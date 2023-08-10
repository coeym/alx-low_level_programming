#include "main.h"
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers
  * @min: minimum range
  * @max: maximum range
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
int *b;
int p = 0;


b = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (b == NULL)
return (NULL);

if (min > max)
return (NULL);

while (min <= max)
{
b[p] = min;
p++;
min++;
}

return (b);
}
