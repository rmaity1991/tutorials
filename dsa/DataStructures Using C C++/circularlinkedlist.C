#include<stdio.h>

#include<stdlib.h>


struct node{
    int data;
    struct node* next;
};

struct node* addNodeIndex(struct node* head, int data,int index){

    struct node* ptr=head;
    int i=0;

    while(i<index){
        ptr=ptr->next;
        i++;
    }
    struct node* q=ptr->next;

    struct node* temp=(struct node*)malloc(sizeof(struct node));

    temp->next=q;
    ptr->next=temp;
    temp->data=data;

    return head;
}

struct node* addNodeLast(struct node* head, int data){

    struct node* ptr=head;

    while(ptr->next!=head){
        ptr=ptr->next;
    }

    struct node* temp=(struct node*)malloc(sizeof(struct node));

    ptr->next=temp;
    temp->next=head;
    temp->data=data;

    return head;
}

struct node* addNodeBegin(struct node* head, int data){

    struct node* ptr=head;

    struct node* temp=(struct node*)malloc(sizeof(struct node));

    temp->next=ptr->next;
    ptr->next=temp;
    temp->data=data;


    return head;
}

void traversal(struct node* head){

    struct node* ptr=head;

    do{
        ptr=ptr->next;
        printf("The element is %d \n ",ptr->data);
        
    }while(ptr->next!=head);

}



int main(){


    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->next=head;

    head=addNodeLast(head,10);
    head=addNodeLast(head,20);
    head=addNodeLast(head,30);
    head=addNodeLast(head,40);
    head=addNodeLast(head,50);

    traversal(head);

    head=addNodeBegin(head,1);
    head=addNodeBegin(head,2);

    traversal(head);

    head=addNodeIndex(head,100,3);
    head=addNodeIndex(head,120,3);

    traversal(head);


}