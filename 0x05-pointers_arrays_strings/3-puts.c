#include "main.h"
/**
 * _strlen - return size of strlen
 * @str: pointer 1
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\0');
}
