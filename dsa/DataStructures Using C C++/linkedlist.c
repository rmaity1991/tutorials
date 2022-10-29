#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void traversal(struct node* head){

    printf("Printing the Elements From Start \n");
    int i=0;

    while(head!=NULL){
        
        printf("Element at index %d is %d \n",i,head->data);

        head=head->next;
        i++;
    }
}

struct node* insertAtBegin(struct node* head,int data){


    struct node * temp=(struct node*)malloc(sizeof(struct node));

    temp->next=head;
    temp->data=data;

    return temp;
}

struct node* insertAtLast(struct node* head,int data){

    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    struct node* p=head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next=temp;
    temp->next=NULL;
    return head;
}

struct node* insertInBetween(struct node* head,int data,int index){


    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
 
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

}

struct node * insertAfterNode(struct node *head, struct node *prevNode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
    return head;
}


struct node* deleteFirst(struct node *head){

    struct node* ptr=head;

    head=head->next;

    free(ptr);

    return head;

}

struct node* deleteLast(struct node *head){

    struct node* ptr;
    struct node* q;
    ptr=head;

    while(ptr->next!=NULL){
        ptr=ptr->next;
    }

    q=ptr->next;

    ptr->next=NULL;

    free(q);

    return head;

}

struct node* deleteAtIndex(struct node*head, int index){
    int i=0;
    struct node* ptr=head;
    struct node* q;

    while(i<index){

        ptr=ptr->next;
        i++;

    }

    q=ptr->next;

    ptr->next=q->next;

    free(q);

    return head;
}





int main(){

    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* second=(struct node*)malloc(sizeof(struct node));
    struct node* third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    struct node* fifth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;

    traversal(head);

    head=insertAtBegin(head,0);

    traversal(head);

    head=insertAtLast(head,60);

    traversal(head);


    head=deleteAtIndex(head,3);

    traversal(head);

    return 0;

}