#include<stdio.h>
int bac(int n,int k,int m);
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int x=bac(n,k,m);
}
int bac(int n,int k,int m)
{
    int cpb=k*m;
    if (n%cpb==0)
    {
        printf("%d",n/cpb);
    }
    else 
    {
        printf("%d",n/cpb+1);
    }
}