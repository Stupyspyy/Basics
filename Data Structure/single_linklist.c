//Basic type of link list in which insertion is always at the end
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
    struct node *temp,*p;//declaring of temp to access the newnode that created and p for traversing 
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
void delete(int data)
{
    struct node *p,*pp,*temp;//declaration of pp for accessing the node that is just before the deleting node
    p=start;
    if(data==start->info)
    {
        start=start->next;
        free(p);
    }
    else
    {
        while(p->info!=data)
        {
            pp=p;
            p=p->next;
        }
        pp->next=p->next;
        free(p);
    }
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("1.insert\n2.delete\n3.display\n4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: insert();
        break;
        case 2: scanf("%d",&data);
                delete(data);
        break;
        case 3: display();
        break;
        case 4: exit(0);
        }
    }
    return 0;
}

