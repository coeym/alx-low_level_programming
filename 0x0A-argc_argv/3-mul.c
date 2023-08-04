#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two numbers
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
int q = 0, p = 0;

if (argc == 3)
{
q = atoi(argv[1]);
p = atoi(argv[2]);
printf("%d\n", q *p);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
