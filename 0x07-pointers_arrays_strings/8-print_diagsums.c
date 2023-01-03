#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonal of a squre
 * @a: pointerto array
 * @s: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int s)
{
	int i, s1;
	unsigned int sum1, sum2;

	s1 = 0;
	sum1 = 0;
	sum2 = 0;

	s1 = (s * s) - 1;
	for (i = 0; i <= s1; i = i + (s + 1))
	{
		sum1 = sum1 + a[i];
	}
	for (i = (s - 1); i < s1; i = i + (s - 1))
	{
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
