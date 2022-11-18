#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * _putchar - putchar 
 * @c: char
 * 
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - printf
 * @str: format string
 * 
 * Return: integer
 */ 
int _printf(const char *str, ...)
{
	int index = 0;
	int check_next = 0;
	/* int f_index = 0; */

	while (str[index] != '\0')
	{
		/*Is it a start of a format string? if so wait for next char */
		if (str[index] == '%')
		{
			check_next = 1;
		}
		else if (check_next == 1)
		{
			/*intrepret each format string following % and clear check_next flag */
			if (str[index] == 's')
			{
				_putchar(str[index - 1]); /*to be removed */
				_putchar(str[index]);
			}
			else
			{ /*if the format string is not supported print it as it is */
				_putchar(str[index - 1]);
				_putchar(str[index]);
			}
			check_next = 0;
		}
		else
		{
			/*What to print when no format strings embeded %s */
			_putchar(str[index]);
		}
		index += 1;
	}
	return (0);
}
