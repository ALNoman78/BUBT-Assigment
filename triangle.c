#include <stdio.h>

int main()
{
    float angle, angle2, angle3;

    printf("Enter the first angle : ");
    scanf("%f", &angle);

    printf("Enter the second angle : ");
    scanf("%f", &angle2);

    angle3 = 180 - (angle + angle2);

    printf("Third angle of the triangle is: %.2f\n", angle3);

    return 0;
}