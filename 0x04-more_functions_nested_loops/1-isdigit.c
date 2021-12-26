
/**
 * _isdigit - checks if c is digit
 * @c: character
 *  Return: 1 if c is digit 0 otherwise
 */
int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
