#include <stdio.h>
#include <string.h>

int main()
{
    int len, i;
    char str[20];

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("The string is not palindrome");
            return 0;
        }
    }
    printf("The stirng is palindrome");
    return 0;
}