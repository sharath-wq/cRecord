#include <stdio.h>
int main()
{
    int first = 0, second = 1, third, num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Fibonacci series of %d numbers is : ", num);
    printf("%d, %d", first, second);
    int count = 2;
    while (count < num)
    {
        third = first + second;
        printf(", %d", third);
        first = second;
        second = third;
        count++;
    }
    getch();
    return 0;
}