#include "main.h"

/**
 *main - check  the code to print half of string
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
