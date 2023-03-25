#include <string.h>
#include <stdlib.h>
/**
 * argstostr - return all the argument
 * @ac:number of argument
 * @av: array of argument
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
