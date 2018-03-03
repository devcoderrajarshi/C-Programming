#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x) (exp(-(pow(x,2))))
int main()
{
    int i,n;
    float a,b,x[30],y[30],simp=0,h;
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
    for(i=0;i<n-1;i+=2)
    {
        simp=simp+(h/3)*(y[i]+4*y[i+1]+y[i+2]);

    }
    printf("\n The result is:%f",simp);
    return 0;
}

