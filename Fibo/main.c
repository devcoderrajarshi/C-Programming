#include <stdio.h>
#include <stdlib.h>

int fibonacci(int);
int main()
{
    int h,i=0,c;
    printf("Enter the range of nums:\n");
    scanf("%d",&h);
    printf("The Fibonacci series is\n");
    for(c=0;c<h;c++){
        printf("%d   ",fibonacci(i));
        i++;
        }
    return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else{
        if(n==1){
            return 1;
        }
        else{
            return (fibonacci(n-1)+fibonacci(n-2));
        }
    }
}
