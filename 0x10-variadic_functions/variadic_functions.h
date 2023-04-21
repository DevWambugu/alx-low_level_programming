#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#define TYPESCONDITIONAL(i) (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
#include <stdarg.h>
typedef struct types
{
	char *valid;
	void(*f)();
}v_types;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void p_character(va_list c);
void p_integer(va_list i);
void p_float(va_list f);
void p_string(va_list s);
#endif
