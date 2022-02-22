#include "main.h"
#include <stdio.h>
/**
 * _strspn - Returns the number of bytes
 * @s: pointer
 * @accept: pointer
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
    unsigned int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
            {
                break;
            }
		}
		if (!accept[j])
        {
            break;
        }
	}
	return (i);
}
