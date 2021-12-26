#include "main.h"

/**
 * leet- encodes a string into 1337
 * @s: string
 * Return: leet string
*/
char *leet(char *s)
{
	char *t = s;
	char let[] = {'a', 'e', 'o', 't', 'l'};
	char n00b[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == let[i] || *s == let[i] - ('a' - 'A'))
				*s = n00b[i];
		}
		s++;
	}
	return (t);
}
