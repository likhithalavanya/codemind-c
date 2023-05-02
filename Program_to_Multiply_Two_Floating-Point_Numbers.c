#include<stdio.h>
void mul(float a,float b);
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    mul(a,b);
}
void mul(float a,float b)
{
    float c;
    c=a*b;
    printf("%.2f",c);
}