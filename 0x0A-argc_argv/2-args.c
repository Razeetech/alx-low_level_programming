#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the argument
 * @argc: number of arg
 * @argv: array of arg
 * Return: alwasy 0 success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
