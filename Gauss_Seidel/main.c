#include<stdlib.h >
#include<conio.h>
#include<math.h>
int main ( )
{
    long  i,j,m,n=0,l ;
    float  x[10],a[10][10] ,b[10],c;
    printf("Enter the value of n :\n");
    scanf("%d",&n);
    printf("Enter the number of iterations :\n");
    scanf( "%d",&l );
    printf("Enter the right hand side constants :\n");
    for(i=0;i<n;i++)
    scanf("%f",&b[i]);
    printf ("Enter the co-efficients row wise :\n");
    for(i =0;i<n;i++)
    { x[i]=0;
    for( j=0;j<n;j++)
    scanf("%f",&a[i][j]);
    }
    m=1;

    line:
    for(i=0;i<n;i++)
    { c=b[i];
    for( j=0;j<n;j++)
    { if( i!=j)
    c=c-a[i][j]*x[j];
    }
    x[i]=(c/a[i][i]);
    }
    m=m+1;
    if (m<=l)
    goto line;
    else
    {
        printf("The Solution is :\n");
        for(i=0;i<n;i++)
        printf("x(%d)=%f\n",i,x[i]);
    }
    return 0;
    }
