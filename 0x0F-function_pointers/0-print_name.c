#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer to the string
 * @f: function to call
 *
 *Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		void (*p)(char *);

		p = f;
		p(name);
	}
}
