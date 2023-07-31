#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int p, y, sum1 = 0, sum2 = 0;

for (p = 0; p <= (size * size);
p = p + size + 1)
sum1 = sum1 + a[p];

for (y = size - 1; y <= (size * size)
- size; y = y + size - 1)
sum2 = sum2 + a[y];
printf("%d, %d\n", sum1, sum2);
}
