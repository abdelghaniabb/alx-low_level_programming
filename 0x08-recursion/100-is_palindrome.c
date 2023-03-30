#include <string.h>
int is_palindrome(char *s)
{
	int n = strlen(s);
	char *rs;
	int i = 0, j = n - 1;

	while (i < n)
	{
		rs[i] = s[j];
		i++;
		j--;
	}
	rs[n] = '\0';

	if(rs == s)
		return (1);
	return (0);
}
