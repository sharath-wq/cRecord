#include <stdio.h>

int main()
{
    int num, i;
    int first = 0, second = 1, next;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci sequence of the first %d numbers: ", num);
    printf("%d, %d ", first, second);

    for (i = 2; i < num; i++)
    {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    return 0;
}