#include<stdio.h>
int main()
{
    int units,uc=0;
    float bill,sc,tc;
    scanf("%d",&units);
    if(units<200)
    {
        bill=units*1.20;
    }
    else if(units>=200 && units<400)
    {
        bill=units*1.50;
    }
    else if(units>=400 && units<600)
    {
        bill=units*1.80;
    }
    else
    {
        bill=units*2.00;
    }
    if(bill>400)
    {
        sc=bill*0.15;
        tc=bill+sc;
        printf("%.2f",tc);
    }
    else
    {
        tc=bill+100;
        printf("%.2f",tc);
    }
}