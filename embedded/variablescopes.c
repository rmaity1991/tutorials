

#include<stdio.h>
#include "variablescopestest.c"

int global1=0;

int external1;

void display();
void display2();
void display3();
void display4(); // from the variablescopestest.c
void change_sys_clock(int clock);
void change_clock(); // from the variablescopestest.c




int main(){
    // display3();
    // display3();
    // display3();
    // display4();
    // printf("The value of external 1 is %d \n",external1);

    change_clock();
}

void display(){

    int i=0;
    i=++i;

    printf("The value of the display is %d \n",i);
}

void display2(){

    global1=++global1;

    printf("The value of the display is %d \n",global1);
}

void display3(){

    static int global2=0;
    global2=++global2;

    printf("The value of the display is %d \n",global2);
}

void change_sys_clock(int clock){
    printf("the system clock has been changed to %d \n",clock);
}