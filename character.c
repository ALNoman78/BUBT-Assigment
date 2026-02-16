#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The character is an alphabet .\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("This character is a number .\n");
    }
    else
    {
        printf("The character is a special character .\n");
    }

    return 0;
}
