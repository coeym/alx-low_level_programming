#include "function_pointers.h"

/**
  * array_iterator - Executes a function given
  * @array:array
  * @size:size
  * @action: pointer to print
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int p = 0;

if (array != NULL && action != NULL && size > 0)
{
while (p < size)
{
action(array[p]);
p++;
}
}
}
