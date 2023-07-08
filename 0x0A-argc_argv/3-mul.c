#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integar
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, p, a, len, u, digit;
i = 0;
p = 0;
a = 0;
len = 0;
u = 0;
digit = 0;

while (s[len] != '\0')
len++;
while (i < len && u == 0)
{
if (s[i] == '-')
++p;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (p % 2)
digit = -digit;
a = n * 10 + digit;
u = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
u = 0;
}
i++;
}
ig (u == 0)
return (0);
return (a);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1];
num2 = _atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
