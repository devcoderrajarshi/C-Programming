
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float f(float x)
{
float y;
y=(4*sin(x)-exp(x));
return y;
}
int main()
{
int i;
float c,eps=0.00001;
float a,b,x=0;
for(i=0; ;i++)
{
  if((f(i)*f(i+1))<0)
  {
      a=i;
      b=i+1;
      break;
  }
}
printf("\n-----------x-----------------------f(x)----\n");
  do
  {
      c=x;
      x=(b-(((b-a)*f(b))/(f(b)-f(a))));
   if((f(b)*f(x))<0)
   {
      a=x;
   }
   else
   {
      b=x;
   }
    printf("\t %f \t \t %f \t \n",x,f(x));
  }
   while (fabs(x-c)>eps);
   printf("\nOne root will be %f %f",x,f(x));

   return 0;
  }



