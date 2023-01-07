#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, m;

	m = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		m = m * atoi(argv[i]);
	}
	printf("%d\n", m);
	return (0);
}
