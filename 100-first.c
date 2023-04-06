#include <stdio.h>
/**
 * print_before_main - prints before the main function is executed
 * Return: void
 */
void __attribute__((constructor)) print_before_main()
{
	printf("%s\n", "You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
