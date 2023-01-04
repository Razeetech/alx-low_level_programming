#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: input 1
 * @y: input 2
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
