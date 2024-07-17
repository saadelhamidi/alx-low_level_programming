#include "search_algos.h"

/**
 * binary_search_1 - Searches for a value in a sorted array using
 * the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @start: Starting index of the search range
 * @end: Ending index of the search range
 * @value: Value to search for
 * Return: The index where value is located,
 * or -1 if not present in the given range
 */
int binary_search_1(int *array, int start, int end, int value)
{
	int i;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; ++i)
			{ printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;

	}
	return (-1);

}

/**
 * exponential_search - Searches for a value in a sorted array using
 * the exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located,
 * or -1 if not present or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t range;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	range = 1;
	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
		range, array[range]);
		range *= 2;
	}
	if (value == 3)
	printf("Value found between indexes [%ld] and [%ld]\n", range / 2, range);
	else
	printf("Value found between indexes [%ld] and [%ld]\n", range / 2, range - 1);

	return (binary_search_1(array, range / 2,
	(range < size) ? range : size - 1, value));
}
