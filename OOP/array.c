#include <stdio.h>
int main()
{
    int a[10];
/*array fill*/
    for (int i = 0; i < 10; i++)
    {
        printf("element %d: ",i);
        scanf("%d", &a[i]);
    }
/*array print*/
    for (int i = 0; i < 10; i++)
    {
        printf("element %d: ",i);
        printf("%d\n",a[i]);

    }
    return 0;
}
