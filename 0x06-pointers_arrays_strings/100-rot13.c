#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer
 *
 * Return: *s
 */

char *rot13(char *s)
{
int i;
int b;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (b = 0; b < 52; b++)
{
if (s[i] == data1[b])
{
s[i] = datarot[b];
break;
}
}
}
return (s);
}
