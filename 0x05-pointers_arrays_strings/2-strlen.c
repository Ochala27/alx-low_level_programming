#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, o;
o = 0;
for (count = 0; s[count] != '\0'; count++)
o++;

return (o);
}
