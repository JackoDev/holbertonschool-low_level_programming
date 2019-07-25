#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer to the string
 * @f: function to call
 *
 *Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
