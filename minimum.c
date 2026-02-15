#include <stdio.h>

int main(){

    int a, b, c;

    printf("Enter three Number: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a<= b && a <= c){
        printf(" Minimum Number is %d\n", a);
    }else if (b <= a && b <= c)
    {
        printf(" Minimum Number is %d\n", b);
    }else
    {
        printf(" Minimum Number is %d\n", c);
    }
    
    return 0;
}