#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: charater to to be checked
 *
 * Return: 1 if character is a letter, 0 i not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
