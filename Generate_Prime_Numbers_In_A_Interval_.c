#include<stdio.h>
int main()
{
    int a,b,f,i,j;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        f=0;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d
",i);
        }
    }
    return 0;
}