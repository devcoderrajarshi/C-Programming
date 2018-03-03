#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[30][30],transpose[30][30],i,j,m,n;
    printf("\nEnter the row and column of the First matrix\n ");
    scanf("%d%d",&m,&n);
    printf("\nEnter the row wise elements of the First matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   printf("\nThe matrix you have entered\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");

        }
        printf("\n\n");
    }


    printf("The Transpose of the matrix is:\n");
     for(i=0;i<n;i++)
    {

        for(j=0;j<m;j++)
        {
            printf("%d",a[j][i]);
            printf("\t");
        }
        printf("\n\n");
    }


}
