#include<stdio.h>
float inches(int h);
int main()
{
    int h;
    scanf("%d",&h);
    float x=inches(h);
}
float inches(int h)
{
    float i;
    i=2.54*h;
    printf("%.2f",i);
    return 0;
}