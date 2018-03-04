#include<stdio.h>
void t_hanoi(int n,char start,char aux,char end)
{
    if(n>0)
       t_hanoi(n-1,start,end,aux);
       printf("%d Move %c to %c\n",n,start,end);
       t_hanoi(n-1,aux,start,end);
}
int main()
{
    int num;//number of rings
    char a,b,c;//name of starting,intermediate and destination place
    scanf("%d  %c",&num,&a);
    scanf(" %c",&b);
     scanf(" %c",&c);
    t_hanoi(num,a,b,c);
    return 0;
}