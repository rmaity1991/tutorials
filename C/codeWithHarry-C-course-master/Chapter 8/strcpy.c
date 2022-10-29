#include <stdio.h>
#include <string.h>
void stringCopy(char *str , char *str2){
   do{
        *str2 = *str;
        str++;
        str2++;
    } while(*str != '\0');
}
int main()
{
    char *str = "Thiswef";
    char str2[34];
    // strcpy(str2 , str);
    stringCopy(str , str2);
    puts(str2);
    return 0;
}