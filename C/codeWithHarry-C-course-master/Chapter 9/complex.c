#include <stdio.h>
typedef struct complex
{
    int a;
    int b;
} complex;
void display(complex c)
{
    int i = 0;
    while (i < 5)
    {
        printf("complex number %d is %d+%di\n", i + 1,c.a, c.b);
        i++;
    }
}
int main()
{
    complex c[5];
 for(int i =0 ; i<5 ; i++)    {
        printf("Enter the 1st value of complex number %d ", i + 1);
        scanf("%d", &c[i].a);
        printf("Enter the 2nd value of complex number %d ", i + 1);
        scanf("%d", &c[i].b);
    }

    for(int i =0 ; i<5 ; i++){
        display(c[i]);
    }


    return 0;
}