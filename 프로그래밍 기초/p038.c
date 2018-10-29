int main(void)
{
   int n;
   int i=0, j=0;
   
   double  x1, y1,x=0, y=0;
   while (1)
   {
      scanf("%d", &n);
      if(n%2==0 && n!=0)
      {
         i++;
         x += n;
         x1 = x / i;
      }
      if(n%2==1)
      {
         j++;
         y += n;
         
         y1 = y /j;
      }
      if(n==0)
      {
         break;
      }
   
   }
   printf("%d %.2lf %d %.2lf", i, x1, j, y1);
      
}
