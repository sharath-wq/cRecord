#include <stdio.h>
int main()
{
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("%d is not a prime number", num);
                exit(0);
            }
        }
        printf("%d is a prime number", num);
    }
    getch();
    return 0;
}