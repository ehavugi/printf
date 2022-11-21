#include "main.h"
/**
  * pointerToHex - convert pointer address to hexdecimal
  *
  * @d: int to be converted
  * @len: size of pointer
  *
  * Return: 0
  */

int pointerToHex(int d, int len)
{
	int i;
	int rem;

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
			_putchar(rem + 'A');
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
		return (0);
	}
	else
	{
		pointerToHex(d / 16, --len);
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
	return (0);
}
