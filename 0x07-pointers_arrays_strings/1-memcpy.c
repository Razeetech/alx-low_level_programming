#include "main.h"
/**
 * _memcpy - fill memory
 * @ss: source string
 * @sf: string filling
 * @n: lenght of buffer
 * Return: new string
 */
char *_memcpy(char *ss, char *sf, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(ss + i) = *(sf + i);
		i++;
	}
	return (ss);
}
