#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to be allocated
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
void *q;

q = malloc(b);

if (q == NULL)
exit(98);

return (q);
}
