#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int p, a;
p = 0;
a = 0;
while (dest[p] != '\0')
p++;
while (src[a] != '\0')
{
dest[p] = src[a];
p++;
a++;
}
dest[p] = '\0';
return (dest);
}
