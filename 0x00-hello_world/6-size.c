#include <stdio.h>
/**
 * main - size of various computer types program
 * Return: always return 0
 */
int main(void)
{
char o;
int c;
long int h;
long long int a;
float l;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(l));
return (0);
}
