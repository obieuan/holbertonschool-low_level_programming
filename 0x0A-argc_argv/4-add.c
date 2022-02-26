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
	int num, x, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (x = 0; argv[num][x]; x++)
		{
			if (argv[num][x] < '0' || argv[num][x] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
