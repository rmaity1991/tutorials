#include <stdio.h>
int main()
{
    float income , tax;
    printf("Enter total Income\n");
    scanf("%f",&income);
    if(income<=250000){
         tax = 0;
    }
    else if (income<=500000)
    {
        tax= 5;
    }
    else if (income<=1000000)
    {
        tax = 20;
    }
    else
    {
        tax = 30;
    }

    printf("Tax paid to govt. is %f ", (income * tax)/100);
    
    
    
}