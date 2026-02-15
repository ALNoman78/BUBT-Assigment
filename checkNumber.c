#include <stdio.h>

int main()
{
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is positive: \n");
    }
    else if (num < 0)
    {
        printf("The number is Negative: \n");
    }
    else
    {
        printf("The number is Zero: \n");
    }

    return 0;
}