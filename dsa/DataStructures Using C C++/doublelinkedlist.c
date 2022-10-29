#include<stdlib.h>
#include<stdio.h>


struct node{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNodeLeft(struct node* head,int data){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    struct node* temp=head;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    temp->left=newnode;

    newnode->right=temp;
    newnode->left=NULL;
    newnode->data=data;

    return head;

}

struct node* createNodeRight(struct node* head,int data){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    struct node* temp=head;

    while(temp->right!=NULL){
        temp=temp->right;
    }

    temp->right=newnode;

    newnode->left=temp;
    newnode->right=NULL;
    newnode->data=data;

    return head;

}

void displayLeft(struct node* head){

    struct node* temp=head;

    do{
        printf("%d \n",temp->data);
        temp=temp->left;
    }
    while(temp->left!=NULL);

}

void displayRight(struct node* head){

    struct node* temp=head;

    do{
        printf("%d \n",temp->data);
        temp=temp->right;
    }
    while(temp->right!=NULL);
    
}

void deleteLeft(struct node* head){
    struct node* temp=head;

    while(temp->left!=NULL){
        temp=temp->left;
    }

}

int main(){

    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->left=NULL;
    head->right=NULL;
    head->data=10;

    head=createNodeLeft(head,90);
    head=createNodeLeft(head,80);
    head=createNodeLeft(head,70);
    head=createNodeLeft(head,60);

    head=createNodeRight(head,110);
    head=createNodeRight(head,120);
    head=createNodeRight(head,130);
    head=createNodeRight(head,140);
    displayLeft(head);
    displayRight(head);

}