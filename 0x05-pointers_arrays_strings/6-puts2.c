#include "main.h"
/**
 * puts2 - return size of strlen
 * @str: pointer 1
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
