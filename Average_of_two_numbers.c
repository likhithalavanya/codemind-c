#include<stdio.h>
int ave(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int x=ave(a,b);
}
int ave(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    printf("Average of %d and %d is: %.2f",a,b,c);
    return 0;
}