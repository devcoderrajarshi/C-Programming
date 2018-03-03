#include <stdio.h>
#include <stdlib.h>

int mergesort(int a[],int low,int high);
int mergeing(int a[],int low,int mid,int high);
int a[50];
int main()
{
    int n,i;
    printf("Enter the range of numbers:\n");
    scanf("%d",&n);
    printf("Enter the numbers :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,(n-1));

  printf("Sorted array:\n");
  for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}



int mergesort(int a[],int low,int high){
    int mid;
if(low<high){

    mid=((low+high)/2);
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merging(a,low,mid,high);
}
return 0;
}

int merging(int arr[],int l,int m,int h){
    int b[25],i=0,j=1,k=l;
while((i<=m) && (j<=h))
{

    if(a[i]<=a[j])
    {
        b[k]=a[i];
        i++;
    }
    else
    {
        b[k]=a[j];
        j++;
    }
    k++;
}
if(i<=m)
{
    for(i=i;i<=m;i++)
    {
        b[k]=a[i];
        k++;
    }
}
else
{
    for(j=j;j<=h;j++)
    {
        b[k]=a[j];
        k++;
    }
}

}
