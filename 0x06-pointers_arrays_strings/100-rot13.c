#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: string
 * Return: rot13 encoded string
*/
char *rot13(char *s)
{
	char *t = s;
	int i;

	while (*s != '\0')
	{
		for (int i = 0; i < 26 && ((*s >= 'a' && *s <= 'z') ||
								   (*s >= 'A' && *s <= 'z'));
			 i++)
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
			{
				*s += 13;
				continue;
			}
			*s -= 13;
		}
		s++;
	}
	return (t);
}
