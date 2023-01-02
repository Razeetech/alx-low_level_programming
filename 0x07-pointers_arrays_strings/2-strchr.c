#include "main.h"

/**
 * _strchr - locate a string
 * @s: string
 * @c character to locate
 * Return: pointer to the firstoccurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
