#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int max;
    int a[10];
}p;
void push(int data)
{
    if(p.top==p.max-1)
    {
        printf("overflow");
    }
    else
    {
        p.a[++p.top]=data;
    }
}
int pop()
{
    if(p.top==-1)
    {
        printf("underflow");
        return 999999999;
    }
    else
    {
        return p.a[p.top--];
    }
}
void display()
{
    for(int i=0;i<=p.top;i++)
       printf("%d\n",p.a[i]);
}
int main()
{
    p.top=-1;
    p.max=10;
    int data,r;
    while(1)
    {
       printf("1.Push\n2.Pop\n3.Display\n4.exit\n");
       scanf("%d",&r);
       switch(r)
       {
           case 1: scanf("%d",&data);
                     push(data);
                     break;
           case 2: printf("%d",pop());
                   break;
           case 3: display();
                   break;
           case 4: exit(0);
       }
    }
    return 0;
}