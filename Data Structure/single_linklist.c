#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
}*start=NULL;
struct node *create()
{
  struct node *newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  return (newnode);
}
void insert()
{
    struct node *temp,*p;
    temp=create();
    temp->next=NULL;
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        p=start;
        while(p->next!=NULL)
        p=p->next;
        p->next=temp;
    }
}
void display()
{
    struct node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d\n",p->info);
        p=p->next;
    }
}
void delete(int temp)
{
    stack nodee *p,temp;
    p=start;
    if(temp==start->info)
    {
        start=start->next;
        free(p);
    }
    else
    {
        while(p->info!=temp)
        {
            temp=p;
            p=p->next;
        }
        temp=
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.insert\n2.display\n3.exit");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: insert();
        break;
        case 2: display();
        break;
        case 3: exit(0);
        }
    }
}
