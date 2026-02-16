#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }

    printf("Sum of even numbers from 1 to %d and %d\n", n, sum);
    
    return 0;
}