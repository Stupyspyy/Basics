//Write a C program to read and print the details of n student using structure and dynamic memory allocation.
//In this program define a structure “student”, which includes “roll” and “name” as members. Then create a data base for n students.
//Reserve the space for all n records using malloc(0/calloc() and then store all the data using the pointer.
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
