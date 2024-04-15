#include "sort.h"
/* */
/**
* swap_int - main function that swaps the values of two integers.
* @a: input number
* @b: should equal at a
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


/**
* bubble_sort - function that sorts an array of integers
* in ascending order using the Bubble sort algorithm
* @array: array to sort the number
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	int i, len = size;
	int flag = 1;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < len - 1; i++)
		{
			flag = 0;
			if (array[i] > array[i + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				flag = 1;
			}
		}
		len--;
	}
}
