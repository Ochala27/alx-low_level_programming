#include "main.h"
/**
 * times - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void times_table(void)
{
int p, a, u, l, t;
for (p = 0; p <= 9; p++)
{
for (a = 0; a <= 9; a++)
{
u = p * a;
if (u > 9)
{
l = u % 10;
t = (u - l) / 10;
_putchar(44);
_putchar(32);
_putchar(t + '0');
_putchar(l + '0');
}
else
{
if (u != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(u + '0');
}
}
_putchar('\n');
}
}
