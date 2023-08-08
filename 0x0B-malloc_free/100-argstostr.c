#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - concatenates all the arguments of the program
  * @ac: the count
  * @av: the vector
  * Return: Always 0
  */
char *argstostr(int ac, char **av)
{
char *str;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
if (ac == 0 || av == NULL)
return (NULL);
while (b < ac)
{
while (av[b][c])
{
a++;
c++;
}
c = 0;
b++;
}
str = malloc((sizeof(char) * a) +ac + 1);
b = 0;
while (av[b])
{
while (av[b][c])
{
str[d] = av[b][c];
d++;
c++;
}
str[d] = '\n';
c = 0;
d++;
b++;
}
d++;
str[d] = '\0';
return (str);
}
