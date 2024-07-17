#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in an array of integers
 *				using the binary search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 *		or -1 if value not present or array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	return (searching(array, value, low, high));

}
/**
 * searching -  function that searches for a value in a sorted
 * array of integers
 *				using the binary search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @low: first element in array
 * @high: last element in array
 * @val: is the value to search for
 * Return: the index where value is located
 *		or -1 if value not present or array is NULL.
 */
int searching(int *array, int val, int low, int high)
{
	int mid, i;

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
	mid = (low + high) / 2;
	if (array[mid] == val)
		return (mid);
	else if (val > array[mid])
		return (searching(array, val, mid + 1, high));
	else
		return (searching(array, val, low, mid - 1));

	return (-1);
}
