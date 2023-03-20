#include "main.h"
/**
 * _strspn - prints the consecusive character
 * @s: source string
 * @a: searching string
 *
 * Return: new string
 */
unsigned int _strspn(char *s, char *a)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(a + i); i++)
		{
			if (*(s + j) == *(a + i))
				break;
		}
		if (*(a + i) == '\0')
			break;
	}
	return (j);
}
