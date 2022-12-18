#include<stdio.h>
int even(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=even(a,b);
}
int even(int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}