#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30][30],b[30][30],c[30][30],i,j,k,l,m,n;
    printf("\nEnter the row and column of the First matrix\n ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the row and column of the Second matrix\n ");
    scanf("%d%d",&k,&l);
    printf("\nEnter the elements of the First matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the Second matrix\n");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe First matrix you have entered\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");

        }
        printf("\n\n");
    }

    printf("\nThe Second matrix you have entered\n");
    printf("\n\n");

    for(i=0;i<k;i++)
    {

        for(j=0;j<l;j++)
        {
            printf("%d",b[i][j]);
            printf("\t");

        }
        printf("\n\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The Addition of the Matrix is:\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }

    return 0;
}
