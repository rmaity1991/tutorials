#include <stdio.h>
void average(int num1, int num2 , int num3){
     int average;
     average = (num1 + num2 + num3)/3;
     printf("Average of these three numbers is %d \n", average);

}

int main()
{
    average(1,2,3);
    return 0;
}
