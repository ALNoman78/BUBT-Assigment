#include <stdio.h>
int main()
{
    int n, i, total = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        total += i;
    }

    printf("Sum of natural numbers from 1 to %d is %d\n", n, total);
    return 0;
}
