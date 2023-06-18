#include <stdio.h>
/**
 * main - Two two digi numbers
 * Return: always return 0
 */
int main(void)
{
int p, o;
for (p = 0; p < 100; p++)
{
for (o = 0; o < 100; o++)
{
if (p < o)
{
putchar((p / 10) + 48);
putchar((p % 10) + 48);
putchar(' ');
putchar((o / 10) + 48);
putchar((o % 10) + 48);
if (p != 98 || o != 99)
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
