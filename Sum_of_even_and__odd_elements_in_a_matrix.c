#include<stdio.h>
int main()
{
    int i,j,n,m,s=0,k=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
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
            if(a[i][j]%2==0)
            {
                s=s+a[i][j];
            }
            else
            {
                k=k+a[i][j];
            }
        }
    }
    printf("%d %d",s,k);
}