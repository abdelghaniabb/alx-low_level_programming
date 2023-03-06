#include <stdio.h>
#include <string.h>
/**
 * rev_string - check code
 * @s: sring
 * Return: revers
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = len - 1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
