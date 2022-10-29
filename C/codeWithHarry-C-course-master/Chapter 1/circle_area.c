#include <stdio.h>
int main()
{
    float pi = 3.14;
    float radius, height;
    printf("Enter the radius of the clyinder \n ");
    scanf("%f", &radius);
    printf("Enter the height of the clyinder \n ");
    scanf("%f", &height);
    printf("Area of circle is %f", (2 * pi * radius * height) + (2 * pi * radius * radius));
    return 0;
}