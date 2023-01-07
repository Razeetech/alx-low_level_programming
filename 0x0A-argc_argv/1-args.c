#include <stdio.h>
/**
 * main - write a program that print number of argument
 * @args: argument count
 * @argv: argument vector
 * Return: this return 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
