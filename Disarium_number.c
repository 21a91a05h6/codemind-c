#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    int n1=num,c=0;
    while(n1!=0)
    {
        n1/=10;
        c++;
    }
    n1=num;
    int sum=0;
    while(n1!=0)
    {
        int rem=n1%10;
        sum+=pow(rem,c);
        n1/=10;
        c--;
    }
    if(sum==num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}