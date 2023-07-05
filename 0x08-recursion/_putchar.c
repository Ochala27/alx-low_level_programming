#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stout
 * @c: The character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int putchar(char c)
{
return (write(1, &c, 1));
}
