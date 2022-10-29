#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int max_size;
    int used_size;
    int * ptr; // This will hold the addresss of the first element of the array
};


void createarray(struct myarray *temp,int maxsize,int usedsize){

    temp->max_size=maxsize;
    temp->used_size=usedsize;

    temp->ptr=(int*)malloc(maxsize*sizeof(int));
}

void setValue(struct myarray *temp)
{
    for(int i=0;i<temp->used_size;i++){
        (temp->ptr)[i]=i;
    }
}

void showValue(struct myarray *temp)
{
    for(int i=0;i<temp->used_size;i++){
        printf("%d \n",(temp->ptr)[i]);
    }
}

int main(){

    struct myarray *marks=(struct myarray*)malloc(sizeof(struct myarray));

    createarray(marks,20,5);
    setValue(marks);
    showValue(marks);

}