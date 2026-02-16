#include <stdio.h>

int main(){
    int n, i;

    printf("Enter the value of Number n: ");
    scanf("%d", &n);

    printf("Natural number from %d to 1 are: \n", n);
    for ( i = n; i >= 1; i--)
    {   
        printf("%d", i);
    }

    printf("\n");

    return 0;
    
}