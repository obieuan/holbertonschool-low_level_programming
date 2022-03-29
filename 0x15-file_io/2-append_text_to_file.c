#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - read the code
 * @filename: texto
 * @text_content: caracteres
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ID = 0, numChar = 0, cantidad = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (cantidad = 0; text_content[cantidad] != '\0'; cantidad++)
		{}
	}
	ID = open(filename, O_APPEND | O_WRONLY, 0600);
	if (ID == -1)
	{
		return (-1);
	}
	numChar = write(ID, text_content, cantidad);
	if (numChar == -1)
	{
		return (-1);
	}
	close(ID);
	return (1);
}
