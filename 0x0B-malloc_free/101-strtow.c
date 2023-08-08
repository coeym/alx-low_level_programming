#include "main.h"
#include <stdlib.h>

/**
  * count_word - function that counts the number of words in a string
  * @s: string
  * Return: word count

  */

int count_word(char *s)
{
int m, j, f;
m = 0;
f = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
m = 0;
else if (m == 0)
{
m = 1;
f++;
}
}
return (f);
}

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
int i = 0;
int len = 0;
while (*(str + i) && *(str + i) != ' ')
{
len++;
i++;
}
return (len);
}


/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return:success or null (error)
 */
char **strtow(char *str)
{
char **b;
int a = 0;
int d;
int p;
int q;
int y;

if (str == NULL || str[0] == '\0')
return (NULL);
p = count_word(str);
if (p == 0)
return (NULL);
b = malloc(sizeof(char *) * (p + 1));
if (b == NULL)
return (NULL);
for (q = 0; q < p; q++)
{
while (str[a] == ' ')
a++;
d = word_len(str + a);
b[q] = malloc(sizeof(char) * (d + 1));
if (b[q] == NULL)
{
for (; q >= 0; q--)
free(b[q]);
free(b);
return (NULL);
}
for (y = 0; y < d; y++)
b[q][y] = str[a++];
b[q][y] = '\0';
}
b[q] = NULL;

return (b);
}
