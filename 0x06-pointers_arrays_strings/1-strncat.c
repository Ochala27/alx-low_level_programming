#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, a;

	p = 0;
	a = 0;

	while (dest[p] != '\0')
		p++;

	while (src[a] != '\0' && a < n)
	{
		dest[p] = src[a];
		p++;
		a++;
	}

	dest[p] = '\0';

	return (dest);
}
