#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
    
}Node;

 Node* insertbegin(Node* head,int val)
 {
    
    Node* nn=(Node*)malloc(sizeof(Node));
    nn->data=val;
    nn->next=head;
    
    return nn;
    
 }

int main()
{
    int n,i,val;
    Node* head=NULL;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        head= insertbegin(head,val);
    }
    
    Node *t=head;
    while(t->next)
    {
        printf("%d->",t->data);
        t=t->next;
        
    }
    printf("%d",t->data);
    return 0;
    
}