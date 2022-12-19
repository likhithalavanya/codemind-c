#include<stdio.h>
int inches(int h);
int main()
{
    int h;
    scanf("%d",&h);
    int x=inches(h);
}
int inches(int h)
{
    float i;
    i=2.54*h;
    printf("%.2f",i);
}