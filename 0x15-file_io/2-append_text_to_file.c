#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - read the code
 * @filename: texto
 * @text_content: caracteres
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, texto;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	texto = open(filename, O_WRONLY | O_APPEND);

	if (texto == -1)
	{
		return (-1);
	}
	write(texto, text_content, i);
	return (1);
}
