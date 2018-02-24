#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct args - struct arguments
 * @args: These are the arguments being used like "f", "i", "s", "c"
 * @f: This is a function pointer to va_list
 */

typedef struct args
{
	char *args; /*This points to "f", "i", "s", "c"*/
	void (*f)(va_list);/*We name this function to pointer*/
} Args;/*We name this struct hihi*/

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
