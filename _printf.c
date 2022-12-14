#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _print_s - print strings
 * @str: string
 * @format: format string
 * @index: index
 * Return: char printed
 */

int _print_s(char *str, char format, int *index)
{
			int len = 0;

			if (format == 's')
				len += _puts(str);
			else if (format == 'S')
				len += _puts_S(str);
			else if (format == 'r')
				len += conv_r(str);
			else if (format == 'R')
				len += conv_R(str);
			*index += 2;
		return (len);
}

/**
 * _print_int - print integers
 * @value: int
 * @format: format
 * @index: index
 *
 * Return: int
 */

int _print_int(unsigned int value, char format, int *index)
{
			int len = 0;
			
			if (format == 'u')
				len += print_uint(value);
			else if (format == 'b')
				len += _tobin(value);
			else if (format == 'x')
				len += toHexSmall(value);
			else if (format == 'X')
				len += toHexBig(value);
			else if (format == 'o')
				len += _toocta(value);
			*index += 2;
			return (len);
}

/**
 * _printf - printf
 * @format: format string
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int index = 0, len = 0; va_list ptr; char curr;

	va_start(ptr, 0);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			curr = format[index + 1];
			if (curr == 'l' && (format[index + 2] == 'i' || format[index + 2] == 'd' || format[index + 2] == 'x' || format[index + 2] == 'X'))
			{

				len += _print_int(va_arg(ptr, long int),format[index+2], &index); }

			if (format[index + 1] == '%')
			{
				len += _putchar('%'); index += 2; }
			else if (format[index + 1] == 'p')
			{
				len += _putchar('0');
			       	len += _putchar('x'); 
				len += pointerToHex(va_arg(ptr, unsigned long), 8); 
				index += 2;
		       	}
			else if (format[index + 1] == 'd' || format[index + 1] == 'i')
			{
				len += print_int(va_arg(ptr, int));
				index += 2; }
			else if (format[index + 1] == 'c')
			{
				len += _putchar((char)va_arg(ptr, unsigned int)); index += 2;}
			else if (curr == 'i' || curr == 'o' || curr == 'X' || curr == 'x'|| curr == 'b' || curr == 'u')
			{
				len += _print_int(va_arg(ptr, unsigned int), curr, &index); }
			else if (curr == 's' || curr == 'S' || curr == 'r' || curr == 'R')
			{
				len += _print_s(va_arg(ptr, char *), curr, &index); }
			else
			{
				len += _putchar(format[index]); index += 1; }
			continue; }
		else
		{
			_putchar(format[index]); len++; }
		index += 1; }
	va_end(ptr);
	return (len);
}
