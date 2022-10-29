#include <stdio.h>
int main()
{
    // char str[] = "Tarun";
    char str[] = {'T','a','r','u','n','\0'};
    char *ptr = str;
    while(*ptr!= '\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    return 0;
}