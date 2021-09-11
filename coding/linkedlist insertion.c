#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node * head=NULL;

void insert(int d)
{
    node * nn=(node*)malloc(sizeof(node));
    nn->data=d;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        node *ptr;
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=nn;
    }
}

void insertanyposition(int d,int pos)
{
    
    node *nn=(node *)malloc(sizeof(node));
    nn->data=d;
    nn->next=NULL;
    
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        node * ptr;
        ptr=head;
        
        pos--;
        while(pos!=1)
        {
            ptr=ptr->next;
            pos--;
        }
        nn->next=ptr->next;
        ptr->next=nn;
    }
        
}


void insertbegin(int d)
{
    node *nn=(node*)malloc(sizeof(node));
    nn->data=d;
    nn->next=NULL;
    
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        nn->next=head;
        head=nn;   
    }
}
void print()
{
    if(head==NULL)
    {
        printf("-1");
    }
    else
    {
        node * ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int d;
        scanf("%d",&d);
        insertbegin(d);
    }
    print();
    return 0;
}