#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - loop to make grid
  * @width: width
  * @height: height
  * Return: null
  */

int **alloc_grid(int width, int height)
{
int **b;
int y;
int q;
int p;
int z;

if (width <= 0 || height <= 0)
return (NULL);
b = malloc(sizeof(int *) * height);
if (b == NULL)
{
free(b);
return (NULL);
}
for (y = 0; y < height; y++)
{
b[y] = malloc(sizeof(int) * width);
if (b[y] == NULL)
{
for (q = y; q >= 0; q--)
{
free(b[q]);
}
free(b);
return (NULL);
}
}
for (p = 0; p < height; p++)
{
for (z = 0; z < width; z++)
{
b[p][z] = 0;
}
}
return (b);
}
