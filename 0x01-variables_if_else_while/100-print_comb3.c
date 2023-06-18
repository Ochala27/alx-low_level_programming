#include <stdio.h>
/**
 * main - Inventing is a combination
 * Return: always return 0
 */
int main(void)
{
int c;
int p = 0;
while (p < 10)
{
if (p != c && p < c)
{
putchar('0' + p);
putchar('0' + c);
if (c + p != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
p++;
putchar('\n');
return (0);
}
