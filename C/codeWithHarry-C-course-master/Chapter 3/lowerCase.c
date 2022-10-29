#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Chrater \n");
    scanf("%c",&ch);
    int ascii = ch;
    if(ascii<97 || ascii>122){
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    
    return 0;
}