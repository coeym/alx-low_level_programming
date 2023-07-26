#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: Alway 0
 */
void reverse_array(int *a, int n)
{
int i;
int c;

for (i = n - 1; i >=  n / 2; i++)
{
c = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = c;
}
}
