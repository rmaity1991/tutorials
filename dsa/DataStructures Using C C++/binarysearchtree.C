#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};


void search(struct node * root,int data){

    if(root==NULL){
        printf("The value is not found or tree is empty");
        return;
    }

    if(root->data==data){

        printf("The value is found");
        return;

    }
    else{
        if(data<root->data){
            search(root->left,data);
        }
        else{
            search(root->right,data);
        }
    }

}
// struct node* createNode(int data){

//     struct node* root=(struct node*)malloc(sizeof(struct node));
//     root->left=NULL;
//     root->right=NULL;
//     root->data=data;
//     return root;

// }


struct node* createNode(struct node* root,int data)
{
    struct node* temp;
    if(root==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->left=NULL;
        temp->right=NULL;
        temp->data=data;
        root=temp;
    }
    else{
        if(data<root->data){
            root->left=createNode(root->left,data);
        }
        else{
            root->right=createNode(root->right,data);
        }
    }
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



int main(){
//    struct node* root=createNode(50);
//    struct node* p1=createNode(20);
//    struct node* p2=createNode(60);
//    struct node* p3=createNode(10);
//    struct node* p4=createNode(25);
//    struct node* p5=createNode(55);
//    struct node* p6=createNode(70);


//    root->left=p1;
//    root->right=p2;

//    p1->left=p3;
//    p1->right=p4;

//    p2->left=p5;
//    p2->right=p6;

//    search(root,75);

      struct node* root=NULL;
      root=createNode(root,40);
      root=createNode(root,20);
      root=createNode(root,30);
      root=createNode(root,60);
      root=createNode(root,70);
      root=createNode(root,10);
      root=createNode(root,50);

      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
      postorder(root);

    return 0;
}