#include "main.h"
/**
  * pointerToHex - convert pointer address to hexdecimal
  *
  * @d: int to be converted
  * @len: size of pointer
  *
  * Return: 0
  */

int pointerToHex(unsigned long d, int len)
{
	unsigned long rem = (d % 16) - 10;
	int length = 0;
	

	if (d / 16 == 0)
	{
	
		if (d % 16 > 9)
			_putchar(rem + 'a');
		else
			_putchar((d % 16) + '0');
		length += 1;
		return (length);
	}
	else
	{
		length += pointerToHex(d / 16, --len);
		if (d % 16 > 9)
			_putchar(rem + 'a');
		else
			_putchar((d % 16) + '0');
		length += 1;
	}
	return (length);
}
