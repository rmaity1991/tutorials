//Create a two-dimensional array of 3x10 to demonstrate the table of 2, 7 and 9 respectively
#include <stdio.h>
int main()
{
    int arr[3][11];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0)
            {
                arr[i][j] = 2 * j;
            }
            else if (i == 1)
            {
                arr[i][j] = 7 * j;
            }
            else
            {
                arr[i][j] = 9 * j;
            }
        }
    }
    for(int j = 0; j < 11; j++){
        printf("\n");
        for (int i = 0; i < 3; i++)
        {
            printf(" %d" , arr[i][j]);
        }
        
    }
}
