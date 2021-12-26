#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: first argument
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
