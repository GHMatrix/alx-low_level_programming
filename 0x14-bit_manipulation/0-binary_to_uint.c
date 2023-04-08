#include "main.h"
/**
 * binary_to_uint - Program converts binary to unsigned int
 * @b: pointing to 0 and 1 chars
 * Return: converted number or 0 if more chars in b or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decima;

	decima = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decima = (decima << 1) + (b[a] - '0');
	}
	return (decima);
}
