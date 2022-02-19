#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter string : ");
    gets(str);
    int len = strlen(str);
    printf("Short form of given string is : ");
    for (int i = 0; i < len; i++)
        if (isupper(str[i]))
            printf("%c", str[i]);
    getch();
    return 0;
}