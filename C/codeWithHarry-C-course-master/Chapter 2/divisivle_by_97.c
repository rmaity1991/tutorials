#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if(number%97 == 0){
        printf("Number is divisible by 97");
    }
    else {
        printf("Number is not divisible by 97");
    }
    return 0;
}