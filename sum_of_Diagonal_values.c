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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j or (i+j)==n-1)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
    
}