#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int change(int cents);
/**
 * main - print count left
 * @argc: parameter entry
 * @argv: one number 
 * Return: zero number
 */
int main(int args, char *argv[])
{
	if (args != 2)

	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);


	for (c >= 0;)
	{
		if (c >= 25)
			c -= 25;

		else if (c >= 10)
			c -= 10;

		else if (c >= 5)
			c -= 5;

		else if(c >= 2)
			c -= 2;

		else if (c >= 1)
			c -= 1;
		
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
