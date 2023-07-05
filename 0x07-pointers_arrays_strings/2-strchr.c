#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; (s[p] != c) && (s[p] != '\0'); p++)
		;
	if (s[p] == c)
		return (s + p);
	else
		return (NULL);
}
