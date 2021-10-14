#ifndef BINARY_MANIP
#define BINARY_MANIP

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned long power(int base, unsigned int exp);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
