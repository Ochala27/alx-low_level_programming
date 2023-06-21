#include "main.h"
/**
 * jack_bauer - Prints every mnute of the day of Jack Bauer
 * Return: ...
 */
void jack_bauer(void)
{
int o, c, h, a;
for (o = 0; o <= 2; o++)
{
for (c = 0; c <= 9; c++)
if ((o <= 1 && c <= 9) || (o <= 2 && c <= 3))
{
for (h = 0; h <= 5; h++)
{
for (a = 0; a <= 9; a++)
{
_putchar(o + '0');
_putchar(c + '0');
_putchar(58);
_putchar(h + '0');
_putchar(a + '0');
_putchar('\n');
}
}
}
}
}

