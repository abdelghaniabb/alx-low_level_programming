#include <stdio.h>
/**
 * print_before_main - prints before the main function is executed
 * Return: void
 */
void __attribute__((constructor)) print_before_main()
{
	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}
