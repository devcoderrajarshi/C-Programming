#include <stdio.h>
#include <stdlib.h>

main()
{
    int array[10][10],i,j,m,n,flag=0;
    printf("Enter the order of the Matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter row wise co-efficients of the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
            if(array[i][j]==0)
            {
                flag++;
            }
        }
    }
    printf("The matrix you have entered:\n");
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            printf("%d",array[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    if(flag>((m+n)/2))
    {
        printf("The given Matrix is a Sparse matrix\n");
    }
    else
        {
        printf("The given Matrix is not a Sparse matrix\n");
        }
        printf("There are %d numbers of zeros\n",flag);
}
