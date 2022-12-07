#include<stdio.h>
int main()
{
    int units,uc=0;
    float bill,c,sr,tc;
    scanf("%d",&units);
    if(units<200)
    {
        c=1.20;
        bill=units*c;
    }
    else if(units>=200 && units<400)
    {
        c=1.40;
        bill=units*1.40;
    }
    else if(units>=400 && units<600)
    {
        c=1.60;
        bill=units*1.60;
    }
    else if(units>=600 && units<800)
    {
        c=1.80;
        bill=units*1.80;
    }
    else
    {
        c=2.00;
        bill=units*2.00;
    }
    if(bill>=400)
    {
        sr=bill*0.15;
        tc=bill+sr;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",units,c,bill,sr,tc);
    }
    else
    {
        tc=bill;
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",units,c,bill,sr,tc);
    }
}