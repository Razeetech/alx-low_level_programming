#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - entry
 * @b: input amount
 * Return: pointer to new
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NUL)
		exit(98);
	return (n);
}
