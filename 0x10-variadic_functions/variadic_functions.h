#ifndef VARFUN
#define VARFUN


#include <stdarg.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void print_all(const char * const format, ...);
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

#endif
