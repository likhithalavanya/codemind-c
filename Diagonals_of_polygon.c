#include<stdio.h>
int poly(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=poly(n);
}
int poly(int n)
{
    int a;
    a=(n*(n-3)*0.5);
    printf("%d",a);
    return a;
}