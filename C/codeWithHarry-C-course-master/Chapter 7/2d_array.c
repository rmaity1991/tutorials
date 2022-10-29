#include <stdio.h>
int main()
{
    int marks[3][4];
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("Enter the marks of the student %d in % d subject\n" , i+1 , j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            printf("The marks of the student %d in % d subject\ is %d \n" , i+1 , j+1 , marks[i][j]);

        }
    }
    return 0;
}
