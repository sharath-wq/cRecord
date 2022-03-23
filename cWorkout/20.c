#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;

    printf("Enter x1 && x2: ");
    scanf("%f%f", &x1, &x2);

    printf("Enter y1 && y2: ");
    scanf("%f%f", &y1, &y2);

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("The distance between the given two numbers is %.4f", distance);
    return 0;
}