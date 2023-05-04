#include<stdio.h>
int cp(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=cp(n);
}
int cp(int n)
{
    int i,j,c=0,co=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                co++;
            }
            c=0;
        }
    }
    printf("%d",co);
    return co;
}