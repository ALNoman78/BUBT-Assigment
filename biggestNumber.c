#include <stdio.h>

int main()
{
    int a, b, c;

    printf(" Enter the three Number : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Max number is %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Max number is %d\n", b);
    }
    else
    {
        printf("Max number is:  %d\n", c);
    }

    return 0;
}