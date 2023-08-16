#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: array
  * @size: size
  * @cmp: pointer to function
  * Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int p = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (p < size)
{
if (cmp(array[p]))
return (p);

p++;
}
}
}

return (-1);
}
