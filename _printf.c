#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - printf
 * @str: format string
 * 
 * Return: integer
 */ 
int _printf(const char *str, ...)
{
	int index = 0;
	int len = 0;
	va_list ptr;

	va_start(ptr,0);
	/* int f_index = 0; */

	while (str[index] != '\0')
	{
		if (str[index] == '%')
		{
			if (str[index+1] == 'd' || str[index+1] == 'i')
			{
				len += print_int(va_arg(ptr,int));
				index += 2;
			}
			else if (str[index+1] == 'c' || str[index+1] == 'C')
			{
				_putchar(va_arg(ptr,int));
				len++;
				index += 2;
			}
			else if (str[index+1] == 's' || str[index+1] == 'S')
			{
				len += _puts(va_arg(ptr,char*));
				index += 2;
			}
			else
			{
				_putchar(str[index]);
				len++;
				index += 1;
			}
			continue;
		}
		else
		{
			/*What to print when no format strings embeded %s */
			_putchar(str[index]);
			len++;
		}
		index += 1;
	}
	return (len);
}
