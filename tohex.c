#include "main.h"
/**
 * toHexBig - convert to hexdecimal in big letters
 *
 * @d: int to be converted
 * Return: length
 */

int toHexBig(unsigned int d)
{
	int len = 0;
	unsigned int rem;

	if (d / 16 == 0)
	{
		if (d % 16 > 9)
		{
			rem = (d % 16) - 10;
			_putchar(rem + 'A');
		}
		else
		{
			_putchar((d % 16) + '0');
		}
		len++;
		return (len);
	}
	else
	{
		len++;
		len += toHexBig(d / 16);

		if (d % 16 > 9)
		{
			 rem = (d % 16) - 10;
			_putchar(rem + 'A');
		}
		else
		{
			_putchar((d % 16) + '0');
		}
	}
	return (len);
}
/**
 * toHexSmall - convert to hexdecimal in small letters
 *
 * @d: int to be converted
 *
 * Return: length
 */

int toHexSmall(unsigned int d)
{
	int len = 0;
	unsigned int rem;

	if (d / 16 == 0)
	{
		if (d % 16 > 9)
		{
			rem = (d % 16) - 10;
			_putchar(rem + 'a');
		}
		else
		{
			_putchar((d % 16) + '0');
		}
		len++;
		return (len);
	}
	else
	{
		len++;
		len += toHexSmall(d / 16);
		if (d % 16 > 9)
		{
			rem = (d % 16) - 10;
			_putchar(rem + 'a');
		}
		else
		{
			_putchar((d % 16) + '0');
		}
	}
	return (len);
}
