#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int i = 0;
    while (i < num)
    {
        int j = 0;
        while (j <= i)
        {
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
    }
    getch();
    return 0;
}