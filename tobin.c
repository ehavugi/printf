#include "main.h"
/**
  * _tobin - convert int to binary 
  * 
  * @d: the int to convert
  * @return: lenght of output
  */
int _tobin(int d)
{
    int len = 0;
    if(d/2 == 0)
    {
        _putchar((d%2) + '0');
        len++;
        return (len);
    }
    else
    {
        len++;
        len += _tobin(d/2);
        _putchar((d%2)+'0');
    }
    return(len);
}