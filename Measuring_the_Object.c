#include<stdio.h>
void measure(int w,int x,int y,int z);
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    measure(w,x,y,z);
}
void measure(int w,int x,int y,int z)
{
    if(w==x || w==y || w==z)
    {
        printf("YES");
    }
    else if(w==x+y || w==y+z || w==x+z)
    {
        printf("YES");
    }
    else if(w==x+y+z)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}