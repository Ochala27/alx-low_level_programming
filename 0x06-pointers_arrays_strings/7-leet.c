#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int p, o;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (p = 0; s[i] != '\0'; p++)
	{
		for (o = 0; o < 10; o++)
		{
			if (s[p] == a[o])
			{
				s[p] = b[o];
			}
		}
	}

	return (s);
}
