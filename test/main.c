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
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("String :[%s] %c,%c,\n", "I am a string!	23",11,130);
    len2 = printf("String :[%s] %c,%c,\n", "I am a string!	23",11,130);
    _printf("Length 2: [%d, %i]\n", len, len);
    printf("Length 2: [%d, %i]\n", len2, len2); 
    
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    _printf("Address 2: %p \n", NULL);
    printf("Addresses 2: %p \n", NULL);
    
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

    _printf("%%S, %S \n", "I am fine thank you	");
    printf("%%S,  %S \n", "I am fine thank you	");
    return (0);
}
