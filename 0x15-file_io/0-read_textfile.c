#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - lee un texto y lo imprime en POSIX
 * @filename: nombre del archivo
 * @letters: cantidad de letras del archivo
 * Description: lee un texto y lo imprime en POSIX stdo
 * Return: numero de letras que pudo leer, 0 si falla
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ID = 0;
	ssize_t numChar = 0;
	ssize_t cantidad = 0;
	char *caracteres = NULL;

	if (filename != NULL)
	{
		caracteres = malloc(letters);
		if (caracteres == NULL)
		{
			return (0);
		}

		ID = open(filename, O_RDONLY, 0600);
		if (ID == -1)
		{
			free(caracteres);
			return (0);
		}
		cantidad = read(ID, caracteres, letters);
		if (cantidad == -1)
		{
			free(caracteres);
			return (0);
		}
		numChar = write(STDOUT_FILENO, caracteres, cantidad);
		if (numChar == -1 || numChar < cantidad)
		{
			free(caracteres);
			return (0);
		}
		close(ID);
		free(caracteres);
		return (numChar);
	}
	return (0);
}
