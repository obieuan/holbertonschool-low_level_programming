#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: - argc
 * @argv: - argv *
 * Return: 1 if the program does not receive two arguments. 0 elsewhere
 */
int main(int argc, char *argv[])
{
	int multi = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
