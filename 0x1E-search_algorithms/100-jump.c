#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * min - Returns the minimum of two values
 * @a: First value
 * @b: Second value
 * Return: The minimum of a and b
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}


/**
 * jump_search - Searches for a value in an array using the
 * jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located,
 * or -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array || size == 0)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);

		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, min(step, size));

	for (; array[prev] < value && prev < min(step, size); prev++)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
