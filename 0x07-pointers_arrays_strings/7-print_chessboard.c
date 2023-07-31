#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: Always 0
 */

void _putchar(void);

void print_chessboard(char (*a)[8])
{
int t, p;

for (t = 0; t < 8; t++)
{
for (p = 0; p < 8; p++)
_putchar(a[t][p]);
_putchar('\n');
}
}
