#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - results of simple operations
  * @argc: arguments
  * @argv: array of pointers
  * Return: always 0
  */
int main(int argc, char *argv[])
{
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

op = get_op_func(argv[2]);

if (!op)
{
printf("Error\n");
exit(99);
}

printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
return (0);
}
