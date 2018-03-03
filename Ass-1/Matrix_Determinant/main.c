#include <stdio.h>
#include <stdlib.h>

main()
{
    int a[30][30],i,j,k,l,det;
    printf("Enter the row & column of the matrix:\n ");
    scanf("%d %d",&k,&l);
    printf("Enter the row wise elements of the matrix");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   printf("\nThe First matrix you have entered\n");
    for(i=0;i<k;i++)
    {

        for(j=0;j<l;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");

        }
        printf("\n\n");
    }
    if(k==2 && l==2)
    {
        det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
    }
    else
        {
        det=(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1]))-(a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0]))+(a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]));
        }
        printf("The determinant of the matrix A= %d",det);
        return 0;

}
