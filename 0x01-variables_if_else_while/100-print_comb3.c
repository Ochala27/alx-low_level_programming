#include <stdio.h>
/**
 * main - Two digits
 * Return: always returne 0
 */
int main(void)
{
int p, c;
for (p = 48; p <= 56; p++)
{
for (c = 49; c <= 57; c++)
{
if (c > p)
{
putchar(p);
putchar(c);
if (p != 56 || c != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
