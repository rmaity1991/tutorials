#include <stdio.h>  
int main()  
{  
    void *ptr = NULL; //void pointer  
    int *p  = NULL;// integer pointer  
    char *cp = NULL;//character pointer  
    float *fp = NULL;//float pointer  
    //size of void pointer  
    printf("size of void pointer = %d\n\n",sizeof(ptr));  
    //size of integer pointer  
    printf("size of integer pointer = %d\n\n",sizeof(p));  
    //size of character pointer  
    printf("size of character pointer = %d\n\n",sizeof(cp));  
    //size of float pointer  
    printf("size of float pointer = %d\n\n",sizeof(fp));  
    return 0;  
}  