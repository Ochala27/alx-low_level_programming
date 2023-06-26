#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int o;
for (o = 0; o < n ; o++)
{
if (o != n - 1)
printf("%d, ", a[o]);
else
printf("%d", a[o]);
}
printf("\n");
}
