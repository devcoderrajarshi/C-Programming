#include <stdio.h>
#include <stdlib.h>
dog();
cat();

dog()
{
    printf("Kalu\n");
    cat();
}
cat()
{
    printf("\nMeowww");
}

int main()
{
    dog();
    return 0;
}
