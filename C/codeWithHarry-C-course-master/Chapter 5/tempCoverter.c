// #include<stdio.h>
// void temp(int celcius){
//     float farenheight = ( celcius * 9 / 5 ) + 32;
//     printf("%f" , farenheight);
//     }
// int main(){
//     temp(37);
//     return 0;
// }

#include <stdio.h>
float tempConverter(int celcius)
{
    float farenheight = (celcius * 9 / 5) + 32;
    return farenheight;
}
int main()
{
    int celcius;
    printf("Enter temp in celcius \n");
    scanf("%d" , &celcius);
    floatem tpF = tempConverter(celcius);
    printf("%f\n",tempF);
    return 0;
}