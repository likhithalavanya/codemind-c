#include<stdio.h>
void inches(int h);
int main()
{
    int h;
    scanf("%d",&h);
    inches(h);
}
void inches(int h)
{
    float i;
    i=2.54*h;
    printf("%.2f",i);
}