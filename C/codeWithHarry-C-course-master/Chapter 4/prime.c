#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter a number \n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("1 is neighter a prime number or composite number\n");
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                printf("Not a prime number");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("Prime Number");
        }
    }

    return 0;
}