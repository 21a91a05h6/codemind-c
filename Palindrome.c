#include<stdio.h>
int main()
{
    int n,reversed=0,rem,o;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        rem=n%10;
        reversed=reversed*10+rem;
        n/=10;
    }
    if(o==reversed)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}