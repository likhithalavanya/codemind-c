#include<stdio.h>
float circle(int r);
int main()
{
    int r;
    scanf("%d",&r);
    float x=circle(r);
}
float circle(int r)
{
    float a,p;
    a=3.14*r*r;
    p=2*3.14*r;
    printf("%.2f
%.2f",a,p);
    return 0;
}