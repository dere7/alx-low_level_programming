#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: string
 * Return: rot13 encoded string
*/
char *rot13(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		for (; (*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'z');)
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M')){
				*s += 13;
				break;
			}
			*s -= 13;
			break;
		}

		s++;
	}
	return (t);
}
