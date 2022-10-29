#include <stdio.h>
int main()
{
    int arr[5];
    int *ptr=&arr[0];
    printf("Enter marks of five students ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    printf("\nMarks of five students are ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d   ", arr[i]);
    }

    return 0;
}