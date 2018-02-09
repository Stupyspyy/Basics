#include<stdio.h>
#include<stdlib.h>
struct nodeP{
int info;
struct node *next;
}start=NULL;
struct node* create()
{
  struct node* newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  return (newnode);
}
void insert()
{
    struct node *temp,*n;
    temp=create();
    temp->next=NULL;
    if(temp==NULL)
        scanf("%d",&temp->info);
    else
    {
        n=start;
        while(n->!=NULL)
        n=n->next;
    }
}