#include<stdio.h>
void bj(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    bj(a,b);
}
void bj(int a,int b)
{
    int c;
    c=21-(a+b);
    if (c>10)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",c);
    }
}