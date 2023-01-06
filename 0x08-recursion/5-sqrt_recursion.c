#include "main.h"
/**
 * sqrt_recursion - checkfor square rot
 * @n: number
 * @s: square
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
			retrun (-1);
		else
			return (sqrt_recursion(n, s + 1));
	}
}
/**
 *_sqrt_recursion - return natural square root
 *@r: number
 *Return: squar
 */
int _sqrt_recursion(int r)
{
	if (r < 0)
		return (-1);
	else
		return (sqrt_recursion(n, 0));
}
