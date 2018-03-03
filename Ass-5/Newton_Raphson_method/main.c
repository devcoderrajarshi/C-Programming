#include <stdio.h>
#include <stdlib.h>

float f(float x)

{
    float y;
    y=3*x*x*x-9*x*x+8;
    return (y);
}
float d(float x)
{
    float d;
    d=9*x*x-18*x;
    return (d);
}

int main()
{
    int i;
    float a,b,c,h,x;
    for(i=1;i<100 ;i++)
    {
        if ((f(i)*f(i+1))<0)
        {
            a=i;
            b=i+1;
            break;

        }

    }
       printf("the root lies between %f and %f",a,b);
            c=(a+b)/2;

        do
        {
            h=f(c)/d(c);
            x=c-h;
            c=x;
        }
            while(fabs(h)>0.0000001);

            printf("the root is %f",x);

        return 0;
}
