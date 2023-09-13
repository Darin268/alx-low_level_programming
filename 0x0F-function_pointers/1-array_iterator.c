#include "function_pointers.h"

/**
 * array_iterator - to executes a function
 * @array: the array to use
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
