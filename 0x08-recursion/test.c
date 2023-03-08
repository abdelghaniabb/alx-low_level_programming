/*#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_alphabet(void)
{
	char c;

	c='a';
	while (c <= 'z')
	{
	
}
}
*/
#include <stdio.h>
int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}
