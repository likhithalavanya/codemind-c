#include<stdio.h>
void value(char a);
int main()
{
    char a;
    scanf("%s",&a);
    value(a);
}    
void value(char a)
{
    int i;
    i=a;
    printf("%d",i);
}