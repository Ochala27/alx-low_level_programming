#include <stdio.h>

void last(void)__attribute__ ((builder));

/**
 * last  - prints a sentence before the main
 * function is executed
 */
void last(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
