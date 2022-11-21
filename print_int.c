#include "main.h"
/**
 * print_uint - print unsigned int
 * @c: input unsigned int
 *
 * Return: number of chars printed
 */
int print_uint(unsigned int c)
{
	int count = 0;

	if (c / 10 == 0)
	{
		_putchar(c + '0');
		count += 1;
	}
	else
	{
		count += print_uint(c / 10);
		_putchar(c % 10 + '0');
		count += 1;
	}
	return (count);
}
/**
 * print_int  - print int
 * @c: int
 *
 * Return: number of char printed
 */
int print_int(int c)
{
	int index = 0;
	unsigned int d;

	if (c < 0)
	{
		_putchar('-');
		index += 1;
		d = c * -1;
		index += print_uint(d);
	}
	else
		{
			index += print_uint(c);
		}
	return (index);
}
