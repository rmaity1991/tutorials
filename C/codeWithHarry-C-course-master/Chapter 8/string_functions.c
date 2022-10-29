#include <stdio.h>
#include <string.h>
int main()
{
    char *str;
    gets(str);
    puts(str);
    // printf("%d",strlen(str));
    int i = 0 ;
    while(*str != '\0'){
        i++;
        str++;
    }
    printf("%d",i);
    return 0;
}