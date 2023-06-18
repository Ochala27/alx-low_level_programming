#include <stdio.h>
/**
 * main - Three digits
 * Return: always return 0
 */
int main(void)
{
int p, c, l;
for (p = 48;  p < 58; p++)
{
for (c = 49; c < 58; c++)
{
for (l = 50; l < 58; l++)
{
if (l > c && c > p)
{
putchar(p);
putchar(c);
putchar(l);
if (p != 55 || c != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
