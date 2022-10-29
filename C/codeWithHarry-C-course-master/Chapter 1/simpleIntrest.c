#include<stdio.h>
int main(){
    int principle = 100 , rate = 5 , time = 1;
    int simpleIntrest = (principle * rate * time) / 100;
    printf("The value is %d",simpleIntrest);
    return 0;
}