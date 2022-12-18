#include<stdio.h>
void even(int a,int b);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    even(a,b);
}
void even(int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}