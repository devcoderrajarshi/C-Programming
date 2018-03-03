#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define f(x) (exp(-(pow(x,2))))
int main()
{
    int i,n;
    float a,b,x[30],y[30],wedd=0,h;
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
        printf("\nx=%f y=%f",x[i],y[i]);
    }
    for(i=0;i<n-5;i+=6)
    {
        wedd=wedd+(3*h/10)*(y[i]+5*y[i+1]+y[i+2]+6*y[i+3]+y[i+4]+5*y[i+5]+y[i+6]);
        printf("\ni=%d,y[%d]=%f,y[%d+1]=%f",i,i,y[i],i,y[i+1]);
    }
    printf("\n The result is:%f",wedd);
    return 0;
}
