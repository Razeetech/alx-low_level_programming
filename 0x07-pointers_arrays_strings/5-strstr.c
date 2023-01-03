#include "main.h"
/**
 * _strstr - first occurence  of the substring
 * @ms: main string to be examined
 * @s: searched in
 * Return: return 0
 */

char *_strstr(char *ms, char *s)
{
	char *str1, *str2;

	while (*ms != '\0')
	{
		str1 = ms;
		str2 = s;
		while (*ms != '\0' && *str2 != '\0' && ms == *str2)
		{
			ms++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		ms = str1 + 1;
	}
	return (0);
}
