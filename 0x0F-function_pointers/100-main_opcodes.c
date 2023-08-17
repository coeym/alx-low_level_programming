#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its own opcodes
 * @argc: arguments
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int bytes;
int p;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (p = 0; p < bytes; p++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (p == bytes - 1)
continue;
printf(" ");

address++;
}

printf("\n");

return (0);
}
