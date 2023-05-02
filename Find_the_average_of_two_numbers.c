#include<stdio.h>
int ave(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float x=ave(a,b);
}
int ave(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    printf("%.4f",c);
    return c;
}