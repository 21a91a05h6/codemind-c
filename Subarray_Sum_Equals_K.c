#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    int k,res=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                res++;
            }
        }
    }
    printf("%d",res);
}