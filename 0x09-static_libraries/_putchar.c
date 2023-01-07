#include <unistd.h>
/**
 * _putchar - wirtes the characterc to stdout
 * @c: the charcter to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
