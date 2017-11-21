#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct student
    {
        int roll;
        char name[25];
    };
    int n,j;
    scanf("%d",&n);
    struct student *f,*i,*g[n];
    f=(struct student *)malloc(n*sizeof(struct student ));
    /*for(i=f;i<f+n;i++)
    {
        scanf("%d %s",&i->roll,&i->name);
    }
    for(i=f;i<f+n;i++)
    {
        printf("%d\t%s\n",i->roll,i->name);
    }

    printf("%d\t%d",f,f+1);
    */
    for(j=0;j<n;j++)
    {
        scanf("%d %s",g[j]->roll,g[j]->name);
    }

    return 0;
}
