#include <stdio.h>
/**
 * main - Alphabet soup
 * Return: always return 0
 */
int main(void)
{
int e = 97;
while (e <= 122)
{
if (e == 101 || e == 113)
{
e++;
continue;
}
putchar(e);
e++;
}
putchar('\n');
return (0);
}
