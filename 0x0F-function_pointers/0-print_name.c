#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to the string 
 * @f: function to call
 *
 *Return: void function
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p);

	p = f;
	p(name);
}
