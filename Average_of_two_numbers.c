#include<stdio.h>
void ave(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    ave(a,b);
}
void ave(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    printf("Average of %d and %d is: %.2f",a,b,c);
}