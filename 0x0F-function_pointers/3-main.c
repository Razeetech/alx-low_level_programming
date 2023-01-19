#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	reult = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
