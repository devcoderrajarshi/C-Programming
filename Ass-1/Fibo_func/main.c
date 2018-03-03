#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);
main()
{
    int n,i=0,c;
    printf("Enter the numbers of elements:");
    scanf("%d",&n);
    printf("Fibonacci series is\n");
    for(c=0;c<n;c++)
    {
        printf("%d\n",fibonacci(i));
        i++;
    }
    return 0;
}
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
    if(n==1)
    {
        return 1;
    }
    else
        {
            return(fibonacci(n-1)+fibonacci(n-2));
        }
    }

}
