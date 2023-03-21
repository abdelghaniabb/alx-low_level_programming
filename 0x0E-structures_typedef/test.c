#include <stdio.h>
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;


int main(void)
{
printf("%i\n", my_point.y);
//printf("%i\n", p.y);
printf("%i\n", (*p).y);
printf("%i\n", p->y);

}
