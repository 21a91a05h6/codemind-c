#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m,s=0,k=0,x,y;
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=abs(a[i][j]-b[i][j]);
            if(j!=n-1)
            {
                printf("%d ",c[i][j]);
            }
            else
            {
                printf("%d",c[i][j]);
            }
        }
        printf("
");
    }
}