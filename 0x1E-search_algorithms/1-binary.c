#include "search_algos.h"

/**
 * binary_search - Uses the binary search algorithm to search for
 * an element in a given array
 * @array: pointer to first element of the array to search in
 * @size: number of elements in array
 * @value: value to be searched for in given array
 * Return: index of value on Success, -1 on Failure
 **/

int binary_search(int *array, size_t size, int value)
{
	int i = 0, left = 0, right = (int)size - 1, mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
