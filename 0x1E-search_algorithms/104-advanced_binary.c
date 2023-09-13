#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursively searches for
 * a value in a sorted array
 * @array: Pointer to the first element of the array
 * @left: Left index of the current subarray
 * @right: Right index of the current subarray
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (left > right)
	return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
	printf("%d", array[i]);
	if (i < right)
		printf(", ");
	else
		printf("\n");
	}

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
	if (mid == left || array[mid - 1] != value)
		return (mid);
	return (advanced_binary_recursive(array, left, mid, value));
	}

	if (array[mid] < value)
	return (advanced_binary_recursive(array, mid + 1, right, value));
	else
	return (advanced_binary_recursive(array, left, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using recursion
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
