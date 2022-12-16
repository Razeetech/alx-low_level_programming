#include <main.h>

/**
 * print_most_numbers - prints numbers between 0 and 9
 * 2 and 4 not included
 * Return: 0-9
 */

void print_most_numbers(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
if ((ch == 2) || (ch == 4))
continue
else
_putchar(i + '0');
}
_putchar('\n');
}
