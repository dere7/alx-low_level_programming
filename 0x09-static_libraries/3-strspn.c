#include <stddef.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: char to be located
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			{
				len++;
				break;
			}
		}

		if (*(accept + i) == '\0')
			return (len);
	}

	return (len);
}
