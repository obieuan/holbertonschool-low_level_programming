#include "main.h"
#include <stdio.h>
/**
 * _strstr - The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 * @haystack: pointer to string
 * @needle: byte a llenar
 * Return: dest
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		a = 0;
		p = haystack;
		while (*p == needle[a])
		{
			a++;
			p++;
			if (needle[a] == '\0')
				return (haystack);
		}
	}
	return (NULL);

}
