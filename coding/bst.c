#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct node
{
    int data;
    struct node *left, *right;
}node;

node* head=NULL , *nn,*ptr,*temp;

void insert()
{
    nn=(node*)malloc(sizeof(node));
    scanf("%d",&nn->data);
    int val= nn->data;
    nn->left=NULL;
    nn->right=NULL;
    
    if(head==NULL)
    {
        head=nn;
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            ptr=temp;
            if(val<temp->data)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(val<ptr->data)
        {
            ptr->left=nn;
        }
        else
        {
            ptr->right=nn;
        }
    }
}


node * minelement(node * k)
{
    if((k==NULL) || (k->left==NULL))
    {
        return k;
    }
    else
        return minelement(k->left);
}


node * maxelement(node * k)
{
    if((k==NULL) || (k->right==NULL))
        return k;
    else
        return maxelement(k->right);
}
void inorder(node *t)
{
    if(t==NULL)
        return;
    
    inorder(t->left);
    printf("%d ",t->data);
    inorder(t->right);
}

void delete(node * t)
{
    head=NULL;
    if(t!=NULL)
    {
        delete(t->left);
        delete(t->right);
        free(t);
    }
    else
        return;
}

int main()
{
    int n,i;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {  
        insert();  
    }
    
    inorder(head);
    printf("\n");
    printf("%d\n",minelement(head)->data);
    printf("%d",maxelement(head)->data);
    delete(12);
    inorder(head);
    
   
    return 0;   
}