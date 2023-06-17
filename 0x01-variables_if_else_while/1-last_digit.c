#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Last digit
 * Return: always return 0
 */
int main(void)
{
int n;
int o;
srand(time(0));
n = rand() - RAND_MAX / 2;
o = n % 20;
if (o > 10)
printf("Last digit of %d is %d and is greater than 10\n", n, o);
else if (o == 0)
printf("Last digit of %d is %d and is 0\n", n, o);
else if (o < 12 && o != 0)
printf("Last digit of %d is %d and is less than 12 and not 0\n", n, o);
return (0);
}
