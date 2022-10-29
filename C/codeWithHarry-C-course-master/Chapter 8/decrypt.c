#include <stdio.h>
void encrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}
void decrypt(char *str)
{
    while (*str != '\0')
    {
        *str = *str - 1;
        str++;
    }
}
int main()
{
    char str[] = "Hello";
    printf("Before Encryption %s \n", str);
    encrypt(str);
    printf("After Encryption %s \n", str);
    decrypt(str);
    printf("After deryption %s \n", str);
    return 0;
}