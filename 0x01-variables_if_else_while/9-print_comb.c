#include <stdio.h>
/**
 * main - Single digit
 * Return: always return 0
 */
int main(void)
{
int l;
for (l = 48; l <= 57; l++)
{
putchar(l);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
