#include <stdio.h>

int main(void)
{
   long long int i,j,k,c=1;
   
   scanf("%lld",&j);
   
   for(i=1; i<=j; i++)
   {
      for (k=2; k<=i; k++) 
      {
         if ((i % k) == 0)
            break;
      }
      if(i == k)
      {
         c++;
      }
   }
   printf("%lld",c-1);
}
