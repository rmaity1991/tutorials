#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node*right;
};


int main(){

    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->left=NULL;
    root->right=NULL;
    root->data=10;

    struct node* p1=(struct node*)malloc(sizeof(struct node));
    p1->left=NULL;
    p1->right=NULL;
    p1->data=20;

    struct node* p2=(struct node*)malloc(sizeof(struct node));
    p2->left=NULL;
    p2->right=NULL;
    p2->data=5;

    root->left=p2;
    root->right=p1;

}