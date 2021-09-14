#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to be located
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0, i = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*(haystack + i) != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		if (*(haystack + i) == *needle)
		{
			char *ptr = _strstr(haystack + i + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}

	return (NULL);
}
