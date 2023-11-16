//DIAMOND SHAPE PATTERN..
/*    *
     ***
    *****
   *******          [FOR n=4]
    *****
     ***
      *             */

#include<stdio.h>
int main()
{
   int n;
   printf("Enter a number:");
   scanf("%d",&n);
   
   //UPPER TRIANGLE
   for(int i=1;i<=n;i++)
   {
      //SPACES OF UPPER TRIANGLE
      for(int j=1;j<=(n-i);j++)
      {
         printf(" ");
      }
      //STARS OF THE UPPER TRIANGLE
      for(int k=1;k<=(2*i-1);k++)
      {
         printf("*");
      }
      printf("\n");
   }

   //LOWER TRIANGLE
   for(int i=(n+1);i<=(2*n-1);i++)
   {
      //SPACES OF LOWER TRIANGLE
      for(int j=1;j<=(i-n);j++)
      {
         printf(" ");
      }
      //STARS OF LOWER TRIANGLE
      for(int k=1;k<=2*(2*n-i)-1;k++)
      {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}