#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    char str[20];
    sprintf(str, "%d", n);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
            printf("%c ", str[j]);
        printf("\n");
    }
    getch();
    return 0;
}