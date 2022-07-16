#include<stdio.h>
int main()
{
    int n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        int c=0,k=0;
        for(j=0;j<n-1;j++)
        {
            if(a[j][i]<a[j+1][i])
            {
                c++;
            }
            else if(a[j][i]==a[j+1][i])
            {
                c++;
                k++;
            }
            else
            {
                k++;
            }
        }
        if(c==(n-1) || k==(n-1))
        {
            s++;
        }
    }
    printf("%d",s);
    
}