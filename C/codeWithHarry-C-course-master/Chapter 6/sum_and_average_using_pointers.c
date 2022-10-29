//WAP to find sum and average of two numbers using call by reference
#include <stdio.h>
int sum(int *a , int *b);
int avg(int *a , int *b);
int main()
{
    int a = 10 , b=20;
    printf("The sum of a and b is %d" , sum(&a , &b));
    printf("The sum of a and b is %d" , avg(&a , &b));
    return 0;
}

int sum(int *a , int *b){
    int sum;
    sum = *a + *b;
    return sum ; 

}

int avg(int *a , int *b){
    int avg = (*a+*b) / 2;
    return avg;
}