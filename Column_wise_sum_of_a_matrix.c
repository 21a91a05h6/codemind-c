#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,s;
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
        printf("%d ",s);
    }
}