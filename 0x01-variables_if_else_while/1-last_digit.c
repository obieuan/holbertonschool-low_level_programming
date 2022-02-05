#include <stdlib.h>
#include <time.h>
/**
 * main - Esta funcion  imprime un numero y te dice
 * si es mayor a 5, menor a 0 o 0 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ultimo = n % 10;

	printf("%d is positive\n", n);

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimo);
	}
	else if (n < 6 && > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimo);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ultimo);
	}
	return (0);
}
