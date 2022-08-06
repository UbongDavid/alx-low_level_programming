#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 * Return: The index of the first element if successful, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int elementIndex = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	while (elementIndex < size)
	{
		if (cmp(array[elementIndex]) != 0)
			return (elementIndex);
		++elementIndex;
	}
	return (-1);
}
