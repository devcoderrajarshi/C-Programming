#include <stdio.h>
#include <stdlib.h>
#define f(x) (exp(-(pow(x,2))))
int main()
{
    int i,n;
    float a,b,x[30],y[30],h,temp=0,trap=0;
    printf("Enter the lower and upper limit:");
    scanf("%f%f",&a,&b);
    printf("Enter the number of intervals");
    scanf("%d",&n);
    h=((b-a)/n);
    printf("\n h=%f",h);
    x[0]=a;
    for(i=0;i<=n;i++)
    {
        y[i]=f(x[i]);
        x[i+1]=x[i]+h;

    }

    for(i=1;i<=n-1;i++)
    {
        temp=temp+(y[i]);
    }
    trap=(h/2)*(y[0]+y[n]+2*temp);
    printf("The result is:%f",trap);


    return 0;

}
