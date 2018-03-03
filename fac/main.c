#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int factorial(long n);
int main()
{
    int k=0;
    printf("Enter the number to factoriate");
    scanf("%d",&k);
    printf("%d!=%d",k,factorial(k));
    return 0;
}
int factorial(long n)
{

    if(n!=1)
    {
        return n*factorial(n-1);
    }
}
