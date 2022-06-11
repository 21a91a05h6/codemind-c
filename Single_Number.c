#include<stdio.h>
int singleElement(int *arr,int n)
{
    int single,flag=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        flag=0;
        single=arr[i];
        for(j=0;j<n;j++)
        {
            if((arr[j]==single)&&(j!=i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            return single;
        }
    }
}
int main()
{
    int n,arr[1000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",singleElement(arr,n));
    return 0;
}