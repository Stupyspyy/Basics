#include<stdio.h>
int partition(int a[],int beg,int end)//beg and end are respective position of array i.e a[10] then beg=0 and end=9
{
    int left,right,loc,temp;//loc may be called pivot which point the specific value of array throughout the process till not get its correct position
    left=loc=beg;//left and right are also same as beg and end but they start moving towards each other as value get its right place
    right=end;
    while(left!=right)
    {
        if(loc==left)
        {
            if(a[loc]<=a[right])
                right--;
            if(a[loc]>a[right])
            {
                temp=a[right];
                a[right]=a[loc];
                a[loc]=temp;
                loc=right;
            }
        }
        else
        {
            if(a[loc]>=a[left])
                left++;
            if(a[loc]<a[left])
            {
                temp=a[left];
                a[left]=a[loc];
                a[loc]=temp;
                loc=left;
            }
        }
    }
    return  loc;
}
void sort(int a[],int beg,int end)
{
    int loc;
    if(beg<end)
    {
        loc=partition(a,beg,end);
        sort(a,beg,loc-1);
        sort(a,loc+1,end);
    }
}
int main()
{
    int a[]={2,9,5,15,36,43,16,45,33};
    int n=9;
    sort(a,0,n-1);
    for(int i=0;i<n;i++)
      printf("%d\n",a[i]);
    return 0;
}