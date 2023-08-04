#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of positive numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
char *y;
int p;
unsigned int q, sum = 0;

if (argc > 1)
{
for (p = 1; p < argc; p++)
{
y = argv[p];

for (q = 0; q < strlen(y); q++)
{
if (y[q] < 48 || y[q] > 57)
{
printf("Error\n");
return (1);
}
}

sum += atoi(y);
y++;
}

printf("%d\n", sum);
}
else
{
printf("0\n");
}

return (0);
}
