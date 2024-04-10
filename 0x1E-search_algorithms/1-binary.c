#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located,
 *         or -1 if the value is not present in the array
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
print_array(array, left, right);
mid = (left + right) / 2;

if (array[mid] == value)
return (mid);

if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}

/**
 * print_array - Prints the elements of an array between two indices.
 * @array: A pointer to the first element of the array.
 * @start: The index to start printing from.
 * @end: The index to stop printing at.
 */
void print_array(int *array, size_t start, size_t end)
{
size_t i;

for (i = start; i <= end; ++i)
{
if (i != start)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}
