#include <stdio.h>

int main()
{
    int num, base, p, r, digit, i, count = 0;
    char a[10];
    printf("Enter a decimel number: ");
    scanf("%d", &num);
    printf("Enter the base to converted: ");
    scanf("%d", &base);
    p = num;

    do
    {
        r = p % base;
        digit = '0' + r;
        if (digit > '9')
            digit += 7;
        a[count] = digit;
        count++;
        p /= base;

    } while (p != 0);

    printf("The base %d equalent of %d is : ", base, num);
    for (i = count - 1; i >= 0; --i)
    {
        printf("%c", a[i]);
    }
    return 0;
}