#include <stdio.h>
/**
 * main - check the code
 * @argc: - argc
 * @argv: - argv *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
