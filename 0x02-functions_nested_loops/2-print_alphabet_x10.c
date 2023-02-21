#include "main.h"
/**
 * print_alphabet_x10 - Program print 10 times the alphabets
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}

