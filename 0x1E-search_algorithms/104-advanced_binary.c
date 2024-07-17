#include "search_algos.h"

/**
 * advanced_binary - Searches for the first occurrence of a value
 * in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The index where value is located,
 * or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, value, 0, size - 1));
}

/**
 * advanced_binary_recursive - Recursive function for advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @low: Low index of the current subarray
 * @high: High index of the current subarray
 * Return: The index where value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}

	mid = low + (high - low) / 2;

	if ((mid == 0 || array[mid - 1] < value) && array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, value, mid + 1, high));
	else
		return (advanced_binary_recursive(array, value, low, mid));
}
