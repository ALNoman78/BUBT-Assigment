#include <stdio.h>

int main(){
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breath of the rectangle: ");
    scanf("%f", &breadth);

    //todo Here is the calculation about
    area = length + breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle = %.2f\n Perimeter of the rectangle = %.2f\n", area, perimeter);

    return 0;
}