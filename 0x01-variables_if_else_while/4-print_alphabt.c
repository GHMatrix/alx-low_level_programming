#include <stdio.h>
/**
 * main - Program prints alphabets lower case and new line
 * Return: 0 (Sucess)
 */
int main(void)
{
	char i;

	i = 'a';
	while
		(i <= 'z') {
			if ((i != 'q' && i != 'e') && i <= 'z')
				putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
