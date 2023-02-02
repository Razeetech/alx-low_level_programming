#include "main.h"
/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index of the bit to clear
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
