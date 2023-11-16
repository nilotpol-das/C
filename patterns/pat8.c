/* PRINT THE PATTERN.
       1
      121
     12321
    1234321
   123454321      */

#include<stdio.h>
int main()
 {
    int n;
    printf("Enter line number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a= i-1;
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=1;j<=(i-1);j++)
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
 }     