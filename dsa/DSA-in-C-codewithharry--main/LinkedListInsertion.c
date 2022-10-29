#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
    /* data */
};


void linkedListTraversal(struct Node *ptr){
    while (ptr!=NULL)
    {
        /* code */
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

//insertAtFirst

struct Node * insertAtFirst(struct Node *head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
    
};


//insertAtEnd
struct Node * insertAtEnd(struct Node *head,int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
    
};




//insertAfterNode
struct Node * insertAfterNode(struct Node *head,struct Node *prevNode, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    
    prevNode->next = ptr;


    return head;
    
    
}




//insertAtIndex

struct Node * insertAtIndex(struct Node *head,int data,int index)
{
   struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   struct Node * p = head;
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

   

   

    
};



int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;


//allocate memory for nodes in the linked list in Heap

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));




    //Link first and secound nodes
    head->data = 8;
    head->next = second;


   //Link Second and secound nodes
    second->data = 11;
    second->next = third;


 //Link Second and  nodes
       
    third->data = 41;
    third->next = fourth;


//Terminate the list at the third node
       
    fourth->data = 66;
    fourth->next = NULL;


printf("Linked list before insertion\n");
    linkedListTraversal(head);
//    head= insertAtFirst(head,56);
//    head = insertAtIndex(head, 56 , 1);
//    head = insertAtEnd(head, 56 );
   head = insertAfterNode(head, third,45 );

printf("Linked list after insertion\n");



    linkedListTraversal(head);


return 0;
}