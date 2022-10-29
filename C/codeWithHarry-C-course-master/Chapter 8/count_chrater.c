#include <stdio.h>
int main()
{
    char *str = "This is a String";
    char ch;
    int count = 0;
    printf("Enter the charater you want to count \n");
    scanf("%c",&ch);
    while (*str!=0)
    {
        if(*str == ch){
            count++;
        }
        
        str++;
    }
    if(count == 0){
        printf("This is not present in this string \n");
    }
    else{
    printf("Count of charater %c is %d \n" , ch , count);
    }
    return 0;
}   