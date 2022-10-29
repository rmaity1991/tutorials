#include<stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int * arr;
    /* data */
};






int isFull(struct stack* ptr){
    if (ptr->top == ptr->size -1 )
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
        /* code */
    }


}

int isEmpty(struct stack* ptr){



    if (ptr->top == -1)
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
        /* code */
    }

}


void push(struct stack* ptr, int val){
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);

        /* code */
    }

    else

    {
        /* code */
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    


}



int pop(struct stack* ptr){
    if (isEmpty(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n");

        return -1;
        /* code */
    }

    else

    {
        /* code */
      int val = ptr->arr[ptr->top];
      ptr->top--;
      return val;
    }
    


}




int main()
{
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size= 10;
    sp->top =-1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    // printf("stack has been created successfully\n");




    printf("Before pushing, Full:%d\n", isFull(sp));
    printf("Before pushing,Empty:%d\n", isEmpty(sp));
    push(sp,1);
    push(sp,52);
    push(sp,53);
    push(sp,36);
    push(sp,26);
    push(sp,16);
    push(sp,86);
    push(sp,52);
    push(sp,17);
    push(sp,18);  // --> Pushed 10 values
    //  push(sp,16);//stack overflow since the size of the stack is 10



    printf( "After pushing, Full:%d\n", isFull(sp));
    printf("After pushing,Empty:%d\n", isEmpty(sp));


 printf("Popped %d from the stack\n", pop(sp));//--> Last in first out
 printf("Popped %d from the stack\n", pop(sp));//--> Last in first out
 printf("Popped %d from the stack\n", pop(sp));//--> Last in first out


return 0;
} 