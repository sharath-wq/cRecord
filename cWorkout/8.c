#include <stdio.h>
#include <string.h>

int main()
{
    int num, len, i, j;
    char str[10];
    printf("Enter a number: ");
    scanf("%d", &num);
    sprintf(str, "%d", num);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            printf("%c ", str[j]);
        }
        printf("\n");
    }
    return 0;
}