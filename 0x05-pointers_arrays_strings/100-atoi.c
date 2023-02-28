#include "main.h"
/**
 * _atoi - convert a string to an integer?????????????????????.
 * @s: string
 * Return: Always 0.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s != '\0') {
if (*s == '-')
{
sign = -1;
}
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
else if (result > 0) {
break; // ignore non-numeric characters after numbers
}
s++;
}

return (sign * result);
}
