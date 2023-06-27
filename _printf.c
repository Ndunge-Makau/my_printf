#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed,
 * excluding the null byte used to end output to strings
 * Authors: Ndunge Makau & Samuel Gikaru
 */

int _printf(const char *format, ...)
{
	int len;

	va_list list;

	va_start(list, format);
	len = vfprintf(stdout, format, list);
	va_end(list);

	return (len);
}
