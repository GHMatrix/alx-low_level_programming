#include <stdio.h>
/**
 * main - Prints sum of all multiples of 3 or 5 to 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
