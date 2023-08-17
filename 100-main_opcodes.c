#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function
 * @argc: number of arguments
 * @argv: arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int q;
int p;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

q = atoi(argv[1]);

if (q < 0)
{
printf("Error\n");
exit(2);
}

for (p = 0; p < q; p++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (p == q - 1)
continue;
printf(" ");

address++;
}

printf("\n");

return (0);
}
