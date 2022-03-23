#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * fact(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d! = %d", num, fact(num));
    return 0;
}