#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,s,k,maxs=0,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i][j];
        }
        if(max<s)
        {
            max=s;
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<m;j++)
        {
            k=k+a[i][j];
        }
        if(maxs<k)
        {
            maxs=k;
        }
    }
    if(max>maxs)
    {
        printf("%d",max);
    }
    else
    {
        printf("%d",maxs);
    }
}