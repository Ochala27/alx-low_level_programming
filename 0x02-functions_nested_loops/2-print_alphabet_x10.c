#include "main.h"
/**
 * print_alphabet_x10 - Alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int l = 0;
while (l <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
l++;
}
}
