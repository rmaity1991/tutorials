// C Code Snippet
// Author- Rohit Maity
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){

    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->left=NULL;
    root->right=NULL;
    root->data=data;
    return root;

}


void preorder(struct node* head){
    if(head!=NULL){
        printf("%d -> ",head->data);
        preorder(head->left);
        preorder(head->right);
    }
}

void postorder(struct node* head){
    if(head!=NULL){
        postorder(head->left);
        postorder(head->right);
        printf("%d -> ",head->data);
    }
}

void inorder(struct node* head){
    if(head!=NULL){
        inorder(head->left);
        printf("%d -> ",head->data);
        inorder(head->right);    
    }
}


int main()
{
   struct node* root=createNode(10);
   struct node* p1=createNode(20);
   struct node* p2=createNode(30);
   struct node* p3=createNode(40);
   struct node* p4=createNode(5);
   struct node* p5=createNode(6);
   struct node* p6=createNode(8);


   root->left=p1;
   root->right=p2;

   p1->left=p3;
   p1->right=p4;

   p2->left=p5;
   p2->right=p6;

   preorder(root);
   printf("\n");
   postorder(root);
   printf("\n");
   inorder(root);
   return 0;
}