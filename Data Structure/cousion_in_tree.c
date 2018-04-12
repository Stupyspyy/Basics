#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int val)
{
   struct node *root=(struct node*)malloc(sizeof(struct node));
   root->data=val;
   root->left=NULL;
   root->right=NULL;
   return root;
}
int issibling(struct node *root,int p1,int p2)
{
    if(root==NULL||root->data==p1||root->data==p2)
        return 0;
    return ((root->left->data==p1)&&(root->right->data==p2))||
           ((root->right->data==p1)&&(root->left->data==p2))||
           (issibling(root->left,p1,p2))||
           (issibling(root->right,p1,p2));
}
int level(struct node *root,int p1,int lev)
{
    if(root==NULL||root->data==p1)
       {
        printf("%d\n",lev);
        return 0;
       }
    else if(root->left->data==p1||root->right->data==p1)
       {
           printf("%d\n",lev+1);
           return (lev+1);
       }
    else
        return (level(root->left,p1,lev+1)||level(root->right,p1,lev+1));
}
int iscousion(struct node *root,int p1,int p2)
{
    if((!(issibling(root,p1,p2)))&&(level(root,p1,0)==level(root,p2,0)))
        return 1;
    else
        return 0;
}
int main()
{
    int p1,p2;
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    scanf(" %d  %d",&p1,&p2);
    if(iscousion(root,p1,p2))
        printf("Yes");
    else
        printf("No");
    return 0;
}