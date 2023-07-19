#include "main.h"

/**
 * _abs - Computes the value of an integer
 *@c: The number to be imputed
 * Return: value of zero
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
