#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: 2d array of integer
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **ch;

	if (width == 0 || height == 0)
		return (NULL);

	ch = malloc(sizeof(int *) * height);
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(ch + i) = malloc(sizeof(int) * width);
		if (*(ch + i) == NULL)
		{
			free(*(ch + i));
			free(ch);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ch[i][j] = 0;
		}
	}

	return (ch);
}
