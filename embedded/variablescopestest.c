
extern int external1; // from the variablescopes.c

extern void change_sys_clock(int); // from the variablescopes.c


void display4(){

    external1=130;

    printf("The value of the external is %d \n",external1);
}

void change_clock(){
    change_sys_clock(4);
}