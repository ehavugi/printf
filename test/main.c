#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);

    len = _printf("Unsigned octal:[%o] %d\n", ui, len);
    len2 = printf("Unsigned octal:[%o] %d\n", ui, len2);
    len = _printf("Unsigned hexadecimal:[%x, %X],%d\n", ui, ui, len);
    len2 = printf("Unsigned hexadecimal:[%x, %X],%d\n", ui, ui, len2);
    _printf("Character:[%c], %d\n", 'H',len);
    printf("Character:[%c], %d\n", 'H', len2);
    len = _printf("String :[%s] %c,%c,\n", "I am a string!	23",11,130);
    len2 = printf("String :[%s] %c,%c,\n", "I am a string!	23",11,130);
    _printf("Length 2: [%d, %i]\n", len, len);
    printf("Length 2: [%d, %i]\n", len2, len2); 
    
    len  = _printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);

    _printf("Address 2: %p %d\n", NULL, len);
    printf("Addresses 2: %p , %d\n", NULL,len2);
    
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    
    _printf("strings reverse %r\n", "hello");
    printf("strings reverse %rs\n", "hello");
    
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    
    _printf("binary %b\n", 98);
    printf("binary (not suppoerted? %b\n",98);

    _printf("Rot13 : %R\n","Gur Mra bs Clguba, ol Gvz Crgref");

    _printf("%%S, %S \n", "I am fine. \n thank you	");
    printf("%%S,  %S \n", "I am fine thank you	");
    return (0);
}
