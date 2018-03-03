#include <stdio.h>
#include <stdlib.h>

max(int [],int );
main()
{
    int a[30],n,m,p;
    printf("\nHow many numbers do you want to Enter?\n");
    scanf("%d",&n);
    printf("\nEnter the numbers:\n");
    for(p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }
    m=max(a,n);
    printf("\nMAXIMUM NUMBER IS:%d\n",m);
    getch();
}
max(int b[30],int k)
{
    int t,i;
    t=b[0];
    for(i=0;i<k;i++)
    {

        if(b[i]>t)
        {
            t=b[i];
        }

    }
    return (t);


}
