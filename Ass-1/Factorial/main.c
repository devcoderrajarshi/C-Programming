#include <stdio.h>
#include <conio.h>

int factorial(long n);

int main()
{
        long number;

        printf("Enter a number to calculate its factorial \n");
        scanf("%d",&number);
        printf("%d!=%d",number,factorial(number));
        return 0;
}
        int factorial(long n)
        {
            if(n!=1)
            {
                return n*factorial(n-1);
            }


        }

