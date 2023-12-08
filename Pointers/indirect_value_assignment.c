#include <stdio.h>

int main()
{
    int *p, q = 199;

    p = &q;
    // *p = 200;
    // printf("new value of q = %d\n",q);
    printf("value of p = %d\n", p);
    (*p)++;
    printf("new value of p = %d\n", *p);
    return 0;
}