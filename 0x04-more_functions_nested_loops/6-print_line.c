#include "main.h"
/**
 * print_line - Draw a straight line according to parameter
 * @n: The number of lines to draw
 * Return: empty
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
_putchar(95);
}
_putchart('\n');
}
}
