#include <stdio.h>
/**
 * main - Program prints alphabets in lower case then upper cases then a line
 * Return: 0 (Success)
 */
int main(void)
{
	char d;

	char i;

	d = 'a';
	i = 'A';
	while
		(d <= 'z') {
			putchar(d);
			d++;
		}
	while
		(i <= 'Z') {
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
