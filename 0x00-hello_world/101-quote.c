#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const int length = sizeof(m) - 1;
write(2, m, length);
return (1);
}
