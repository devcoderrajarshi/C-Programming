#include <stdio.h>
#include <stdlib.h>

main()
{

int first[30][30],second[30][30],multiply[30][30],i,j,k,l,m,n,d,sum=0;
    printf("\nEnter the row and column of the First matrix\n ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements of the First matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter the row and column of the Second matrix\n ");
    scanf("%d%d",&k,&l);
    if(n!=k)
    {
        printf("Multiplication is not possible\n");
    }
    else
        {
    printf("\nEnter the elements of the Second matrix\n");

    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }
        printf("\nThe First matrix you have entered\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d",first[i][j]);
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
            printf("%d",second[i][j]);
            printf("\t");

        }
        printf("\n\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<l;j++)
        {
            for(d=0;d<k;d++)
            {
                sum=sum+first[i][d]*second[d][j];
            }
            multiply[i][j]=sum;
            sum=0;
        }
    }
    printf("\nThe product of the matrix is:\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<l;j++)
        {
            printf("%d",multiply[i][j]);

            printf("\t");
        }
        printf("\n\n");
    }
}
}
