#include <stdio.h>

int main()
{
    int num, d, sum = 0, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        d = num % 10;
        num /= 10; // num = num / 10;
        sum = sum + d;
        rev = rev * 10 + d;
    }

    printf("the sum of the digits %d\n the reveres of the number %d", sum, rev);
    return 0;
}