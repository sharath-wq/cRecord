#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int i;
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            printf("Given string is not a palindrome");
            exit(0);
        }
    }
    printf("Given string is palindrome");
    getch();
    return 0;
}