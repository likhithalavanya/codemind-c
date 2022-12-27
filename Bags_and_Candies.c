#include<stdio.h>
void bac(int n,int k,int m);
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    bac(n,k,m);
}
void bac(int n,int k,int m)
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