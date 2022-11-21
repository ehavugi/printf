#include "main.h"
/**
 * toHexBig - convert to hexdecimal in big letters
 * 
 * @d: int to be converted
 * @return: length of output 
 */

int toHexBig(int d)
{
    int len = 0;
    if(d/16 == 0)
    {
        if (d%16 > 9)
        {
            int rem = (d%16) - 10;
            _putchar(rem + 'A');
        }
        else
        {
            _putchar((d%16) + '0');
        }
        len++;
        return (len);
    }
    else
    {
        len++;
        len += toHexBig(d/16);
        if (d%16 > 9)
        {
            int rem = (d%16) - 10;
            _putchar(rem + 'A');
        }
        else
        {
            _putchar((d%16) + '0');
        }
    }
    return(len);
}

/**
 * pointerToHex - convert pointer address to hexdecimal
 * 
 * @d: int to be converted
 * @return: 0  
 */

int pointerToHex(int d, int len)
{
	int i ;
	int rem;
    if(d/16 == 0)
    {
	--len;

        if (d%16 > 9)
        {
            rem = (d%16) - 10;
	    for (i = len;i > 0; i--)
            {
                _putchar('0');
                len--;
            }
            _putchar(rem + 'A');
        }
        else
        {
            for (i= len;i > 0; i--)
            {
                _putchar('0');
                len--;
            }
            _putchar((d%16) + '0');
        }
        return (0);
    }
    else
    {
        pointerToHex(d/16, --len);
        if (d%16 > 9)
        {
            rem = (d%16) - 10;
            _putchar(rem + 'A');
        }
        else
        {
            _putchar((d%16) + '0');
        }
    }
    return(0);
}

/**
 * toHexSmall - convert to hexdecimal in small letters
 * 
 * @d: int to be converted
 * @return: length of output 
 */

int toHexSmall(int d)
{
    int len = 0;
    if(d/16 == 0)
    {
        if (d%16 > 9)
        {
            int rem = (d%16) - 10;
            _putchar(rem + 'a');
        }
        else
        {
            _putchar((d%16) + '0');
        }
        len++;
        return (len);
    }
    else
    {
        len++;
        len += toHexSmall(d/16);
        if (d%16 > 9)
        {
            int rem = (d%16) - 10;
            _putchar(rem + 'a');
        }
        else
        {
            _putchar((d%16) + '0');
        }
    }
    return(len);
}
