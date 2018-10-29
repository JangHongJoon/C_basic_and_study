#include <stdio.h>
#define A 2.05
#define B 1.15
#define C 1.09

int main()
{
   char f;
   int i,a=0,b=0,c=0,num=0,w=0,m;
   float sum = 0;
   printf("몇 묶음?\n");
   scanf("%d",&m);
   while(1)
   {
      printf("뭐사"); 
      scanf("%c",&f);
      if(f == 97)
      {
         printf("아티초크 몇개\n");
         scanf("%d",&i); 
         a = a + i;
         w = w + i;
      }
      if(f == 98)
      {
         printf("비트 몇개\n");
         scanf("%d",&i); 
         b = b + i;
         w = w + i;
      }
      if(f == 99)
      {
         printf("당근 몇개\n");
         scanf("%d",&i); 
         c = c + i;
         w = w + i;
      }
         
      if(f == 113)
      {
         printf("종료 누름"); 
         break;
      }
   }
   sum = A*a*m + B*b*m + C*c*m;
   w = w*m;
   
   if (sum >= 100)
      sum = sum - (sum*0.05);
      
   if (w <= 4)
      sum = sum +6.5;
   else if (w <= 19)
      sum = sum + 14;
   else if (w >= 20)
   {
      sum = sum + 14 + (w*0.5);
   }
   
   printf("%.2f",sum);
   return 0;
   
}
