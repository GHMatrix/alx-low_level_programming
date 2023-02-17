#include <stdio.h>
/**
 * main - Program prints numbers of base16 then new line
 * Return: 0 (Success)
 */
int main(void)
{
	char i;

	int b;

	i = 'a';
	b = 0;
	while
		(b < 10) {
			putchar(b + '0');
			b++;
		}
	while
		(i <= 'f') {
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
