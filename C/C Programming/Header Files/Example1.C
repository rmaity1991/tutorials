#include<stdio.h>
#include "Example1.h"

int main(){

    message();

    nd x;

    x.var1=10;
    x.var2=20;

    printf("The number in var1 is %0.4d",x.var1);
    printf("The number in var1 is %4d",x.var1);
    printf("The number in var1 is %1.4d",x.var1);
    printf("The number in var1 is %2.4d",x.var1);

}