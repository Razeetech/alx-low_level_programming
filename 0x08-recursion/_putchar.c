#include <unistd.h>
/**
 * _putchar - write the character to c stdout
 * @c: character to print
 * Return: 0n success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
