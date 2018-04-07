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
    if(root==NULL)
        return 0;
    return (root->left->data==p1||root->right->data==p2)||
           (root->right->data==p1||root->left->data==p2)||
           issibling(root->left,p1,p2)||
           issibling(root->right,p1,p2);
}
int level(struct node *root,int p1)
{
    
}
int iscompanion()
int main()
{
    
}
