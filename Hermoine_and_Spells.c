#include<stdio.h>
int spells(int a,int b,int c);
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=spells(a,b,c);
}
int spells(int a,int b,int c)
{
    if(a>c && b>c)
    {
        printf("%d",a+b);
    }
    else if(b>a && c>a)
    {
        printf("%d",b+c);
    }
    else if(c>b && a>b)
    {
        printf("%d",c+a);
    }
    return 0;
}