#include <stdio.h>
#include <string.h>

struct s_type
{
    /* data */
    int i;
    char str[40];
} s, *p, s2;

int main()
{
    p = &s;
    p->i = 10;
    strcpy(p->str, "i love struct and pointers");
    printf("%d %s", p->i, p->str);
    s2 = s; /*s2 is now having s*/
    return 0;
}