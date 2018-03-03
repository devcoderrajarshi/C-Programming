#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

float main()
{
    int i,n,j,k,l;
    float x[20],y[20],a[20],X[20],Y[20];
    printf("Enter the value of n (number of pairs-1)\n");
    scanf("%d",&n);
    printf("Enter the values of  x & y");
    for(i=0;i<n+1;i++)
    {
        scanf("%f%f",&x[i],&y[i]);

    }
    printf("Enter the required number of interpolated values of y\n");
    scanf("%d",&l);
    printf("Enter the %d values of X for which values of y are required:\n",l);
    for(k=0;k<l;k++)
    {
        scanf("%f",&X[k]);
    }
    for(k=0;k<l;k++)
    {
        for(i=0;i<n+1;i++)
        {
            a[i]=l;
            for(j=0;j<n+1;j++)
            {
                if(i!=j)

                    a[i]=a[i]*(X[k]-x[j])/(x[i]-x[j]);

            }

        }
        Y[k]=0;
        for(i=0;i<n+l;i++)
        {
            Y[k]=Y[k]+a[i]*y[i];
        }
            printf("The values of X and Y are :%f \t\t%f\n",X[k],Y[k]);

    }
    return 0;
}
