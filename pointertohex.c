#include "main.h"
/**
  * pointerToHex - convert pointer address to hexdecimal
  *
  * @d: int to be converted
  * @len: size of pointer
  *
  * Return: 0
  */

int pointerToHex(long d, int len)
{
	int i;
	int rem;
	int length = 0;

	if (d / 16 == 0)
	{
		--len;
		if (d % 16 > 9)
		{
			rem = (d % 16) - 10;
			for (i = len; i > 0; i--)
			{
				_putchar('0');
				len--;
			}
			_putchar(rem + 'a');
		}
		else
		{
			for (i = len; i > 0; i--)
			{
				_putchar('0');
				len--;
			}
			_putchar((d % 16) + '0');
		}
		length += 1;
		return (length);
	}
	else
	{
		length += pointerToHex(d / 16, --len);
		if (d % 16 > 9)
		{
			rem = (d % 16) - 10;
			_putchar(rem + 'a');
		}
		else
		{
			_putchar((d % 16) + '0');
		}
		length += 1;
	}
	return (length);
}
