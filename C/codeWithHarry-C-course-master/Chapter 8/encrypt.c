#include <stdio.h>
void encrypt(char *str){
    while(*str!='\0'){
        *str = *str + 1;
        str++;
    }
}
int main()
{
    char str[] = "Hello";
    encrypt(str);
    puts(str);
    return 0;
}