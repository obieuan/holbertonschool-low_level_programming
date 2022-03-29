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
	ssize_t texto, texto_aux, numCaracteres;
	char *caracteres;

	caracteres = malloc(letters);
	if (caracteres == NULL || filename == NULL)
	{
		return (0);
	}

	texto = open(filename, O_RDONLY);

	if (texto == -1)
	{
		free(caracteres);
		return (0);
	}

	texto_aux = read(texto, caracteres, letters);

	numCaracteres = write(STDOUT_FILENO, caracteres, texto_aux);

	close(texto);

	return (numCaracteres);
}
