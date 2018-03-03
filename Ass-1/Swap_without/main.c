#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping\n");
    printf("\nThe value of a =%d\n",a);
    printf("\nThe value of b =%d\n",b);
    return 0;

}
