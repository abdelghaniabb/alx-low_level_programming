/**
 * _memset - chek code
 * @s: var1
 * @b: var2
 * @n: var3
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
