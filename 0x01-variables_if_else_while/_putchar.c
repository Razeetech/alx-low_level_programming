#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character
 * Return: 1
 */

int _putchar(char c)
{
	(write(1, &c, 1));
}
