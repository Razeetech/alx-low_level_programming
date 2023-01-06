#include "main.h"
/**
 * sqrt_recursion - check if square of number exist
 * @n: number
 * @s: possible number
 * Return: square root of number
 */
int sqrt_recursion(int n, int s)
{
	if ((s * s) == n)
	{
		return (s);
	}
	else
	{
		if ((s * s) > n)
			return (-1);
		else
			return (sqrt_recursion(n, s + 1));
	}
}
/**
 * _sqrt_recursion - return the natural sqr
 * @r: number to find
 * Return: sqaure root
 */
int _sqrt_recursion(int r)
{
	if (r < 0)
		return (-1);
	else
		return (sqrt_recursion(r, 0));
}
