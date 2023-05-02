#include<stdio.h>
void poly(int n);
int main()
{
    int n;
    scanf("%d",&n);
    poly(n);
}
void poly(int n)
{
    int a;
    a=(n*(n-3)*0.5);
    printf("%d",a);
}