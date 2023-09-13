#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      the Exponential search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, left, right, mid, i;

	if (array == NULL || size == 0)
	return (-1);

	if (array[0] == value)
	return (0);

	bound = 1;
	while (bound < size && array[bound] < value && printf(
				"Value checked array[%lu] = [%d]\n", bound, array[bound]))
	bound *= 2;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (
				bound < size - 1) ? bound : size - 1);

	left = bound / 2;
	right = (bound < size - 1) ? bound : size - 1;

	while (left <= right)
	{
	mid = left + (right - left) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%d%s", array[i], (i < right) ? ", " : "\n");

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}

	return (-1);
}
