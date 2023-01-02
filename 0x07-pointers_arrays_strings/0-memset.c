#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant tyle byte
 * @n: bytes
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		*(s + i) = d;
		i++;
	}
	return (s);
}
