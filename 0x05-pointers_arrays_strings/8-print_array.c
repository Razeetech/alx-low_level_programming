#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of number
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf(a[t]);
		if (t != n - *a)
			printf(", ");
	}

	printf("\n");
}
