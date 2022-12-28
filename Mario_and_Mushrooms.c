#include<stdio.h>
int mario(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int x=mario(n);
}
int mario(int n)
{
    if(n%3==1)
    {
        printf("HUGE");
    }
    else if(n%3==0)
    {
        printf("NORMAL");
    }
    else
    {
        printf("SMALL");
    }
}